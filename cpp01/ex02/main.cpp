#include "ZombieEvent.hpp"

int main(void)
{
	ZombieEvent zombieEvent;

	zombieEvent.setZombieType("Aggressif");
	Zombie *zombie = zombieEvent.newZombie("Gringo");
	zombie->advert();
	delete zombie;
	return (0);
}