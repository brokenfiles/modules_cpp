/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 10:55:47 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 10:55:47 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(const std::string &name) : name(name)
{
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << name << " just died for no apparent reason!" << std::endl;
}

const std::string &Victim::getName() const
{
	return name;
}

void Victim::setName(const std::string &name)
{
	Victim::name = name;
}

void Victim::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a cute little sheep!" << std::endl;
}

Victim::Victim(const Victim &victim)
{
	*this = victim;
}

Victim &Victim::operator=(const Victim &victim)
{
	setName(victim.getName());
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Victim &victim)
{
	os << "I'm " << victim.getName() << " and I like otters!" << std::endl;
	return os;
}
