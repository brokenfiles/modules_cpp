/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 10:56:22 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 10:56:22 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{}

PlasmaRifle::~PlasmaRifle()
{}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &plasmaRifle)
{
	AWeapon::operator=(plasmaRifle);
	return (*this);
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &plasmaRifle) :  AWeapon("Plasma Rifle", 5, 21)
{
	(*this) = plasmaRifle;
}
