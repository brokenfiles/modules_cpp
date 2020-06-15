#include "ZombieHorde.hpp"

std::string ZombieHorde::randomName(size_t len)
{
	std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
	std::random_device rd;
	std::mt19937 generator(rd());

	std::shuffle(alphabet.begin(), alphabet.end(), generator);
	return (alphabet.substr(0, len));
}

ZombieHorde::ZombieHorde(size_t n, std::string type)
{
	zombies_number = n;

	horde = new Zombie[n];
	for (size_t i = 0; i < n; ++i)
	{
		horde[i].setType(type);
		horde[i].setName(ZombieHorde::randomName(10));
	}
}

void ZombieHorde::announce()
{
	for (size_t i = 0; i < zombies_number; ++i)
	{
		horde[i].advert();
	}
}

ZombieHorde::~ZombieHorde()
{
	delete[] horde;
	std::cout << "The horde has been eliminated." << std::endl;
}