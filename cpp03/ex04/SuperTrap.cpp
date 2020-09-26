/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 14:49:59 by louis             #+#    #+#             */
/*   Updated: 2020/08/01 14:49:59 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(const std::string &name) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	std::cout << "Constructor of SuperTrap" << std::endl;
	this->setHitPoints(100);
	this->setMaxHitPoints(100);
	this->setEnergyPoints(120);
	this->setMaxEnergyPoints(120);
	this->setLevel(1);
	this->setMeleeAttackDamage(60);
	this->setRangedAttackDamage(20);
	this->setArmorDamageReduction(5);
}

SuperTrap::~SuperTrap()
{
	std::cout << "Destructor of SuperTrap" << std::endl;
}

void SuperTrap::rangedAttack(const std::string &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(const std::string &target)
{
	NinjaTrap::meleeAttack(target);
}

SuperTrap::SuperTrap(const SuperTrap &superTrap): ClapTrap(superTrap), FragTrap(superTrap), NinjaTrap(superTrap)
{
	(*this) = superTrap;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &superTrap)
{
	FragTrap::operator=(superTrap);
	return *this;
}
