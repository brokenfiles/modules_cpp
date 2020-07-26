/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 10:59:35 by louis             #+#    #+#             */
/*   Updated: 2020/07/24 10:59:35 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, float speed): name (name), color(color), speed(speed)
{
	std::cout << name << " was born !" << std::endl;
}

Pony::~Pony()
{
	std::cout << name << " dies :(" << std::endl;
}

void Pony::run()
{
	std::cout << name << " runs at " << speed << " km/h !" << std::endl;
}

void Pony::eat(std::string food)
{
	std::cout << name << " ate " << food << std::endl;
}

void Pony::setSpeed(float newSpeed)
{
	Pony::speed = newSpeed;
}

Pony::Pony(const Pony &pony)
{
	*this = pony;
}

Pony &Pony::operator=(const Pony &pony)
{
	this->name = pony.name;
	this->speed = pony.speed;
	this->color = pony.color;
	return (*this);
}
