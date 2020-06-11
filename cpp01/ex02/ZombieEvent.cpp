#include "ZombieEvent.hpp"

Zombie	*::ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, ZombieEvent::type));
}

void	ZombieEvent::setZombieType(std::string type)
{
	ZombieEvent::type = type;
}
