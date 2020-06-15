#include "ZombieHorde.hpp"

int main(void)
{
	ZombieHorde *zombieHorde1 = new ZombieHorde(3, "whisper");
	zombieHorde1->announce();
	delete zombieHorde1;

	ZombieHorde zombieHorde(33, "nice");
	zombieHorde.announce();
	return (0);
}