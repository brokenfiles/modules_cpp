#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type): name(name), type(type)
{}

void Zombie::advert(void)
{
	std::cout << "<" << Zombie::name << " (" << Zombie::type << ")>" << "Bruuuuuuuuuuhr..." << std::endl;
}