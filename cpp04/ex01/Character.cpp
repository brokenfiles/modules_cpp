//
// Created by Louis Laurent on 25/06/2020.
//

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
	return *this;
}

const std::string &Character::getName() const
{
	return name;
}

void Character::setName(const std::string &name)
{
	Character::name = name;
}

int Character::getAp() const
{
	return ap;
}

void Character::setAp(int ap)
{
	Character::ap = ap;
}

AWeapon *Character::getWeapon() const
{
	return weapon;
}

void Character::setWeapon(AWeapon *weapon)
{
	Character::weapon = weapon;
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
			weapon->attack();
			std::cout << "Character " << getName() << " attacks enemy " << enemy->getType() << " with weapon " << weapon->getName()
					  << std::endl;
			enemy->takeDamage(damages);
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


