#include "ZombieEvent.hpp"

int main(void)
{
	ZombieEvent zombieEvent;

	zombieEvent.setZombieType("aggressive");
	Zombie *heapZombie1 = zombieEvent.newZombie("Gringo");
	heapZombie1->advert();
	delete heapZombie1;

	zombieEvent.setZombieType("cute");

	Zombie *heapZombieRandom = zombieEvent.randomChump();
	delete heapZombieRandom;

	Zombie stackZombie = Zombie("ZombStack", "dumb");
	stackZombie.advert();

	return (0);
}