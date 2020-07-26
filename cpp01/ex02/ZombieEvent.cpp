/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 11:00:11 by louis             #+#    #+#             */
/*   Updated: 2020/07/24 11:00:11 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

Zombie *ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->type));
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

void ZombieEvent::setZombieType(std::string new_type)
{
	this->type = new_type;
}

ZombieEvent::ZombieEvent()
{}

ZombieEvent::~ZombieEvent()
{}

ZombieEvent::ZombieEvent(const ZombieEvent &other)
{
	*this = other;
}

ZombieEvent &ZombieEvent::operator=(const ZombieEvent &other)
{
	this->type = other.type;
	return (*this);
}
