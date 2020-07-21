//
// Created by Louis Laurent on 25/06/2020.
//

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

void AWeapon::setName(const std::string &name)
{
	AWeapon::name = name;
}

int AWeapon::getApcost() const
{
	return apcost;
}

void AWeapon::setApcost(int apcost)
{
	AWeapon::apcost = apcost;
}

int AWeapon::getDamage() const
{
	return damage;
}

void AWeapon::setDamage(int damage)
{
	AWeapon::damage = damage;
}
