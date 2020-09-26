/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 10:56:36 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 10:56:36 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion &RadScorpion::operator=(const RadScorpion &radScorpion)
{
	Enemy::operator=(radScorpion);
	return (*this);
}

RadScorpion::RadScorpion(const RadScorpion &radScorpion) : Enemy(80, "RadScorpion")
{
	(*this) = radScorpion;
}

