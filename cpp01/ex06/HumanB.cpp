#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name)
{}

void HumanB::attack()
{
	std::cout << name << " attacked with " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	HumanB::weapon = &weapon;
}