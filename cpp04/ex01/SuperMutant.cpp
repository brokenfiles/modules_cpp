/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 10:56:44 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 10:56:44 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Break everything!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

void SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage / 3);
}

SuperMutant &SuperMutant::operator=(const SuperMutant &superMutant)
{
	Enemy::operator=(superMutant);
	return (*this);
}

SuperMutant::SuperMutant(const SuperMutant &superMutant) : Enemy(170, "Super Mutant")
{
	(*this) = superMutant;
}


