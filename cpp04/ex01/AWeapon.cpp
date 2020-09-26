/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 10:55:54 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 10:55:54 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
	setName(name);
	setApcost(apcost);
	setDamage(damage);
}

AWeapon::~AWeapon()
{}

AWeapon::AWeapon(const AWeapon &aWeapon)
{
	*this = aWeapon;
}

AWeapon &AWeapon::operator=(const AWeapon &aWeapon)
{
	setDamage(aWeapon.getDamage());
	setApcost(aWeapon.getApcost());
	setName(aWeapon.getName());
	return (*this);
}

const std::string &AWeapon::getName() const
{
	return name;
}

void AWeapon::setName(const std::string &newName)
{
	this->name = newName;
}

int AWeapon::getApcost() const
{
	return apcost;
}

void AWeapon::setApcost(int newApcost)
{
	this->apcost = newApcost;
}

int AWeapon::getDamage() const
{
	return damage;
}

void AWeapon::setDamage(int newDamage)
{
	this->damage = newDamage;
}
