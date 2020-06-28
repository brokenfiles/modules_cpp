//
// Created by Louis Laurent on 23/06/2020.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "Constructor of ScavTrap" << std::endl;
	hit_points = 100;
	max_hit_points = 100;
	energy_points = 50;
	max_energy_points = 50;
	level = 1;
	melee_attack_damage = 20;
	ranged_attack_damage = 15;
	armor_damage_reduction = 3;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor of ScavTrap" << std::endl;
}

void ScavTrap::challengeNewcomer(const std::string &target)
{
	std::string challenges[] = {"Défi 1", "Défi 2", "Défi 3"};
	int random_number = rand() % 3;

	std::cout << TITLE << "(scavtrap) " << this->name << " met au défi " << target << " de "
			  << challenges[random_number] << std::endl;
}
