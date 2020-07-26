/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 11:00:34 by louis             #+#    #+#             */
/*   Updated: 2020/07/24 11:00:34 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

ZombieHorde::ZombieHorde(const ZombieHorde &zombieHorde)
{
	(*this) = zombieHorde;
}

ZombieHorde &ZombieHorde::operator=(const ZombieHorde &zombieHorde)
{
	this->zombies_number = zombieHorde.zombies_number;
	delete [] this->horde;
	this->horde = new Zombie[zombieHorde.zombies_number];
	for (size_t i = 0; i < zombieHorde.zombies_number; ++i)
	{
		this->horde[i] = zombieHorde.horde[i];
	}
	return (*this);
}
