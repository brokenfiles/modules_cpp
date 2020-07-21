//
// Created by Louis Laurent on 23/06/2020.
//

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