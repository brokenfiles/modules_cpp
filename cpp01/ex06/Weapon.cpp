#include "Weapon.hpp"

std::string & Weapon::getType()
{
	return type;
}

void Weapon::setType(std::string type)
{
	Weapon::type = type;
}

Weapon::Weapon(std::string type) : type(type)
{}