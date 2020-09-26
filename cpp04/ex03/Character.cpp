/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 11:00:49 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 11:00:49 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string &name)
{
	this->_name = name;
	this->_count = 0;
	init_inventory();
}

Character::Character(const Character &character)
{
	this->_name = character.getName();
	this->_count = 0;
	init_inventory();
	for (unsigned int j = 0; j < character._count; ++j)
	{
		this->_inventory[this->_count++] = character._inventory[j]->clone();
	}
}

Character &Character::operator=(Character const &character)
{
	this->_name = character.getName();
	for (unsigned int i = 0; i < this->_count; ++i)
	{
		if (this->_inventory[i] != NULL)
		{
			delete this->_inventory[i];
		}
	}
	this->_count = 0;
	for (unsigned int j = 0; j < character._count; ++j)
	{
		this->_inventory[this->_count++] = character._inventory[j]->clone();
	}
	return (*this);
}

Character::~Character()
{
	for (unsigned int i = 0; i < this->_count; ++i)
	{
		if (this->_inventory[i] != NULL)
		{
			delete this->_inventory[i];
		}
	}
}

const std::string &Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria *m)
{
	if (this->_count < 4 && m)
	{
		this->_inventory[this->_count++] = m;
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && (unsigned int) idx < this->_count)
	{
		if (this->_inventory[idx] != NULL)
		{
			this->_inventory[idx] = NULL;
			this->_count--;
		}
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && (unsigned int) idx < this->_count)
	{
		if (this->_inventory[idx] != NULL)
		{
			this->_inventory[idx]->use(target);
		}
	}
}

void Character::init_inventory()
{
	for (int i = 0; i < 4; ++i)
	{
		this->_inventory[i] = NULL;
	}
}
