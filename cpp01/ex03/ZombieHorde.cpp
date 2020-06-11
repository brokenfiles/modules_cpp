#include "ZombieEvent.hpp"

Zombie *ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, ZombieEvent::type));
}

std::string ZombieEvent::randomName(size_t len)
{
	std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
	std::random_device rd;
	std::mt19937 generator(rd());

	std::shuffle(alphabet.begin(), alphabet.end(), generator);
	return (alphabet.substr(0, len));
}

Zombie *ZombieEvent::randomChump()
{
	Zombie *zombie = new Zombie(ZombieEvent::randomName(10), type);

	zombie->advert();
	return (zombie);
}

void ZombieEvent::setZombieType(std::string type)
{
	ZombieEvent::type = type;
}
