/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 11:01:20 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 11:01:20 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->_count = 0;
	for (int i = 0; i < 4; ++i)
	{
		this->_known_materials[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource)
{
	this->_count = 0;
	for (int i = 0; i < materiaSource._count; ++i)
	{
		this->_known_materials[this->_count++] = materiaSource._known_materials[i];
	}
	for (int j = materiaSource._count; j < 4; ++j)
	{
		this->_known_materials[j] = NULL;
	}
	(void) materiaSource;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->_count; ++i)
	{
		delete this->_known_materials[i];
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materiaSource)
{
	for (int i = 0; i < this->_count; ++i)
	{
		delete this->_known_materials[i];
		this->_known_materials[i] = NULL;
	}
	this->_count = 0;
	for (int j = materiaSource._count; j < 4; ++j)
	{
		this->learnMateria(materiaSource._known_materials[j]->clone());
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	if (this->_count < 4 && materia)
	{
		this->_known_materials[this->_count++] = materia;
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	if (isMaterialKnown(type))
	{
		for (int i = 0; i < this->_count; ++i)
		{
			if (this->_known_materials[i]->getType() == type)
			{
				return this->_known_materials[i]->clone();
			}
		}
	}
	return NULL;
}

bool MateriaSource::isMaterialKnown(std::string const &type) const
{
	for (int i = 0; i < this->_count; ++i)
	{
		if (this->_known_materials[i]->getType() == type)
		{
			return true;
		}
	}
	return false;
}
