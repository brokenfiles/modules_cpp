/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 14:48:20 by louis             #+#    #+#             */
/*   Updated: 2020/08/01 14:48:20 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	srand(time(NULL));
	std::cout << "Constructor of FragTrap" << std::endl;
	hit_points = 100;
	max_hit_points = 100;
	energy_points = 100;
	max_energy_points = 30;
	level = 1;
	melee_attack_damage = 30;
	ranged_attack_damage = 20;
	armor_damage_reduction = 5;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target)
{
	const int energy_cost = 25;
	if (energy_points - energy_cost < 0)
	{
		std::cout << TITLE << "(fragtrap) " << this->name << " n'a pas assez d'énergie !" << std::endl;
	}
	else
	{
		this->energy_points -= energy_cost;
		std::string attack_names[] = {"Clavier", "Serviette", "Kyr", "Écran", "Lucille"};
		int attack_amount[] = {5, 30, 70, 23, 150};

		int random_number = rand() % 4 + 1;
		std::cout << TITLE << "(fragtrap) " << this->name << " attaque avec " << attack_names[random_number] << " ! Il inflige "
				  << attack_amount[random_number] << " points de dégâts à " << target << std::endl;
	}
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor of FragTrap" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap)
{
	srand(time(NULL));
	*this = fragTrap;
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrap)
{
	ClapTrap::operator=(fragTrap);
	return *this;
}
