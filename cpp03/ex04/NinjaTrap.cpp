//
// Created by Louis Laurent on 23/06/2020.
//

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

NinjaTrap::NinjaTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "Constructor of NinjaTrap" << std::endl;
	hit_points = 60;
	max_hit_points = 60;
	energy_points = 120;
	max_energy_points = 120;
	level = 1;
	melee_attack_damage = 60;
	ranged_attack_damage = 5;
	armor_damage_reduction = 0;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "Destructor of NinjaTrap" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &clapTrap)
{
	std::cout << this->name << " a envoyé une chaussure à " << clapTrap.getName() << std::endl;
	clapTrap.takeDamage(30);
	this->beRepaired(5);
}

void NinjaTrap::ninjaShoebox(ScavTrap &clapTrap)
{
	std::cout << this->name << " a envoyé une chaussure à " << clapTrap.getName() << std::endl;
	clapTrap.takeDamage(30);
	this->beRepaired(5);
}

void NinjaTrap::ninjaShoebox(NinjaTrap &clapTrap)
{
	std::cout << this->name << " a envoyé une chaussure à " << clapTrap.getName() << std::endl;
	clapTrap.takeDamage(30);
	this->beRepaired(5);
}
