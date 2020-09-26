/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 14:47:59 by louis             #+#    #+#             */
/*   Updated: 2020/08/01 14:47:59 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : name(name), hit_points(100), max_hit_points(100), energy_points(50),
									   max_energy_points(50),
									   level(1), melee_attack_damage(20), ranged_attack_damage(15),
									   armor_damage_reduction(3)
{
	srand(time(NULL));
	std::cout << "Le scavtrap " << name << " est né (constructeur)" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap)
{
	srand(time(NULL));
	*this = scavTrap;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap)
{
	this->hit_points = scavTrap.hit_points;
	this->max_hit_points = scavTrap.max_hit_points;
	this->energy_points = scavTrap.energy_points;
	this->max_energy_points = scavTrap.max_energy_points;
	this->level = scavTrap.level;
	this->melee_attack_damage = scavTrap.melee_attack_damage;
	this->ranged_attack_damage = scavTrap.ranged_attack_damage;
	this->armor_damage_reduction = scavTrap.armor_damage_reduction;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Le scavtrap " << name << " est mort (destructeur)" << std::endl;
}


void ScavTrap::rangedAttack(const std::string &target)
{
	std::cout << TITLE << "(scavtrap) " << this->name << " attaque " << target << " à distance, causant "
			  << this->ranged_attack_damage
			  << " points de dégâts !" << std::endl;
}

void ScavTrap::meleeAttack(const std::string &target)
{
	std::cout << TITLE << "(scavtrap) " << this->name << " attaque " << target << " en mélée, causant "
			  << this->melee_attack_damage
			  << " points de dégâts !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	int damages = amount - this->armor_damage_reduction;
	if (damages < 0) damages = 0;
	if (this->hit_points <= damages)
	{
		this->hit_points = 0;
		std::cout << TITLE << "(scavtrap) " << this->name << " est mort " << std::endl;
	}
	else
	{
		this->hit_points -= damages;
		std::cout << TITLE << "(scavtrap) " << this->name << " a pris " << damages << " points de dégâts !"
				  << std::endl;
	}
}

void ScavTrap::beRepaired(unsigned int amount)
{
	int heal = ((unsigned int)this->hit_points + amount > (unsigned int)this->max_hit_points) ? this->max_hit_points - this->hit_points : amount;
	int heal_energy = ((unsigned int)this->energy_points + amount > (unsigned int)this->max_energy_points) ? this->max_energy_points -
																				 this->energy_points : amount;
	this->hit_points += heal;
	this->energy_points += heal_energy;
	if (heal)
	{
		std::cout << TITLE << "(scavtrap) " << this->name << " a été soigné de " << heal << " points de dégâts !"
				  << std::endl;
	}
	else
	{
		std::cout << TITLE << "(scavtrap) " << this->name
				  << " n'a pas été soigné car des points de dégâts sont déjà pleins"
				  << std::endl;
	}
	if (heal_energy)
	{
		std::cout << TITLE << "(scavtrap) " << this->name << " a récupéré " << heal_energy << " points d'énergie !"
				  << std::endl;
	}
	else
	{
		std::cout << TITLE << "(scavtrap) " << this->name
				  << " n'a pas récupéré de point d'énergie car des points de d'énergie sont déjà pleins"
				  << std::endl;
	}
}

void ScavTrap::challengeNewcomer(const std::string &target)
{
	std::string challenges[] = {"Défi 1", "Défi 2", "Défi 3"};
	int random_number = rand() % 3;

	std::cout << TITLE << "(scavtrap) " << this->name << " met au défi " << target << " de "
			  << challenges[random_number] << std::endl;
}