/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 10:56:04 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 10:56:04 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string &name) : name(name), ap(40)
{}

Character::~Character()
{}

Character::Character(const Character &character)
{
	*this = character;
}

Character &Character::operator=(const Character &character)
{
	(void)character;
	return *this;
}

const std::string &Character::getName() const
{
	return name;
}

void Character::setName(const std::string &newName)
{
	this->name = newName;
}

int Character::getAp() const
{
	return ap;
}

void Character::setAp(int newAp)
{
	this->ap = newAp;
}

AWeapon *Character::getWeapon() const
{
	return weapon;
}

void Character::setWeapon(AWeapon *newWeapon)
{
	Character::weapon = newWeapon;
}

void Character::recoverAP()
{
	if (getAp() + 10 >= 40)
	{
		setAp(40);
	}
	else
	{
		setAp(getAp() + 10);
	}
	std::cout << "Character " << getName() << " recovers " << 10 << " action points." << std::endl;
}

void Character::equip(AWeapon *aWeapon)
{
	this->weapon = aWeapon;
}

void Character::attack(Enemy *enemy)
{
	if (! (*enemy).isAlive()) {
		std::cout << "This enemy is already dead." << std::endl;
		return ;
	}
	if (this->weapon != NULL)
	{
		const int apCost = weapon->getApcost();
		const int damages = weapon->getDamage();
		if (apCost > getAp())
		{
			std::cout << "Character " << getName() << " does not have enough action points." << std::endl;
		}
		else
		{
			setAp(getAp() - apCost);
			std::cout << "Character " << getName() << " attacks enemy " << enemy->getType() << " with weapon " << weapon->getName()
					  << std::endl;
			weapon->attack();
			enemy->takeDamage(damages);
			if (enemy->getHp() == 0) {
				delete enemy;
			}
		}
	}
	else
	{
		std::cout << "Character " << getName() << " does not have weapon, ouups." << std::endl;
	}
}

std::ostream &operator<<(std::ostream &os, const Character &character)
{
	if (character.getWeapon() != NULL) {
		os << character.getName() << " has "  << character.getAp() << " AP and carries a " << character.getWeapon()->getName();
	} else {
		os << character.getName() << " has "  << character.getAp() << " AP and is unarmed";
	}
	return os;
}


