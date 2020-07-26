/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 11:00:02 by louis             #+#    #+#             */
/*   Updated: 2020/07/24 11:00:02 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type): name(name), type(type)
{}

Zombie::~Zombie(void)
{
	std::cout << Zombie::name << " dies, he was a " << Zombie::type << " zombie." << std::endl;
}

void Zombie::advert(void)
{
	std::cout << "<" << Zombie::name << " (" << Zombie::type << ")>" << " Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie(const Zombie &other)
{
	*this = other;
}

Zombie &Zombie::operator=(const Zombie &other)
{
	this->name = other.name;
	this->type = other.type;
	return (*this);
}

