/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 11:00:27 by louis             #+#    #+#             */
/*   Updated: 2020/07/24 11:00:27 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type): name(name), type(type)
{}

Zombie::Zombie()
{}

Zombie::~Zombie(void)
{
	std::cout << Zombie::name << " dies, he was a " << Zombie::type << " zombie." << std::endl;
}

void Zombie::advert(void)
{
	std::cout << "<" << Zombie::name << " (" << Zombie::type << ")>" << " Bruuuuuuuuuuhr..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

void Zombie::setType(std::string type)
{
	this->type = type;
}

Zombie::Zombie(const Zombie &zombie)
{
	(*this) = zombie;
}

Zombie &Zombie::operator=(const Zombie &zombie)
{
	this->name = zombie.name;
	this->type = zombie.type;
	return (*this);
}
