/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 10:55:30 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 10:55:30 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(const std::string &name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
	std::cout << getName() << " has been turned into a pink pony!" << std::endl;
}

Peon &Peon::operator=(const Peon &peon)
{
	Victim::operator=(peon);
	return (*this);
}

Peon::Peon(const Peon &peon) : Victim(peon.getName())
{
	*this = peon;
}
