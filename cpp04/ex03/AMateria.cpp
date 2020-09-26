/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 11:00:42 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 11:00:42 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
	this->_xp = 0;
}

AMateria::AMateria(const AMateria &materia)
{
	this->_xp = materia.getXP();
}

AMateria &AMateria::operator=(const AMateria &other)
{
	this->_xp = other.getXP();
	return (*this);
}

AMateria::~AMateria()
{}

std::string const &AMateria::getType() const
{
	return this->_type;
}

unsigned int AMateria::getXP() const
{
	return this->_xp;
}

void AMateria::use(ICharacter &target)
{
	this->_xp += 10;
	(void) target;
}





