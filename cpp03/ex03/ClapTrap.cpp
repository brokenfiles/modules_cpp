//
// Created by Louis Laurent on 22/06/2020.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name) : name(name)
{
	srand(time(NULL));
	std::cout << "Constructor of ClapTrap" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor of ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
	*this = clapTrap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap)
{
	this->hit_points = clapTrap.hit_points;
	this->max_hit_points = clapTrap.max_hit_points;
	this->energy_points = clapTrap.energy_points;
	this->max_energy_points = clapTrap.max_energy_points;
	this->level = clapTrap.level;
	this->melee_attack_damage = clapTrap.melee_attack_damage;
	this->ranged_attack_damage = clapTrap.ranged_attack_damage;
	this->armor_damage_reduction = clapTrap.armor_damage_reduction;
	this->name = clapTrap.name;
	return (*this);
}

const std::string &ClapTrap::getName() const
{
	return name;
}

void ClapTrap::setName(const std::string &name)
{
	ClapTrap::name = name;
}

int ClapTrap::getHitPoints() const
{
	return hit_points;
}

void ClapTrap::setHitPoints(int hitPoints)
{
	hit_points = hitPoints;
}

int ClapTrap::getMaxHitPoints() const
{
	return max_hit_points;
}

void ClapTrap::setMaxHitPoints(int maxHitPoints)
{
	max_hit_points = maxHitPoints;
}

int ClapTrap::getEnergyPoints() const
{
	return energy_points;
}

void ClapTrap::setEnergyPoints(int energyPoints)
{
	energy_points = energyPoints;
}

int ClapTrap::getMaxEnergyPoints() const
{
	return max_energy_points;
}

void ClapTrap::setMaxEnergyPoints(int maxEnergyPoints)
{
	max_energy_points = maxEnergyPoints;
}

int ClapTrap::getLevel() const
{
	return level;
}

void ClapTrap::setLevel(int level)
{
	ClapTrap::level = level;
}

int ClapTrap::getMeleeAttackDamage() const
{
	return melee_attack_damage;
}

void ClapTrap::setMeleeAttackDamage(int meleeAttackDamage)
{
	melee_attack_damage = meleeAttackDamage;
}

int ClapTrap::getRangedAttackDamage() const
{
	return ranged_attack_damage;
}

void ClapTrap::setRangedAttackDamage(int rangedAttackDamage)
{
	ranged_attack_damage = rangedAttackDamage;
}

int ClapTrap::getArmorDamageReduction() const
{
	return armor_damage_reduction;
}

void ClapTrap::setArmorDamageReduction(int armorDamageReduction)
{
	armor_damage_reduction = armorDamageReduction;
}
