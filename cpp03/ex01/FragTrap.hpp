/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 14:47:53 by louis             #+#    #+#             */
/*   Updated: 2020/08/01 14:47:53 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP__HPP
# define FRAG_TRAP__HPP

# include <iostream>
# include <random>

# define TITLE "FR4G-TP "

class FragTrap
{
private:
	std::string name;
	int hit_points, max_hit_points, energy_points, max_energy_points,
			level, melee_attack_damage, ranged_attack_damage, armor_damage_reduction;
public:
	FragTrap(std::string name);

	FragTrap(const FragTrap &fragTrap);

	~FragTrap();

	FragTrap &operator=(const FragTrap &fragTrap);

	void rangedAttack(std::string const &target);

	void meleeAttack(std::string const &target);

	void vaulthunter_dot_exe(std::string const &target);

	void takeDamage(unsigned int amount);

	void beRepaired(unsigned int amount);
};

#endif