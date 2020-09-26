/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 10:56:29 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 10:56:29 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50)
{}

PowerFist::~PowerFist()
{}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist &PowerFist::operator=(const PowerFist &powerFist)
{
	AWeapon::operator=(powerFist);
	return (*this);
}

PowerFist::PowerFist(const PowerFist &powerFist) : AWeapon("Power Fist", 8, 50)
{
	(*this) = powerFist;
}
