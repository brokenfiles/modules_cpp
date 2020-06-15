#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type): name(name), type(type)
{}

Zombie::Zombie()
{}

Zombie::~Zombie(void)
{
	std::cout << Zombie::name << " dies, he was a " << Zombie::type << " zombie." << std::endl;
}

void Zombie::advert(void)
{
	std::cout << "<" << Zombie::name << " (" << Zombie::type << ")>" << " Bruuuuuuuuuuhr..." << std::endl;
}

void Zombie::setName(std::string name)
{
	Zombie::name = name;
}

void Zombie::setType(std::string type)
{
	Zombie::type = type;
}