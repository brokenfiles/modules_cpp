/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 14:48:51 by louis             #+#    #+#             */
/*   Updated: 2020/08/01 14:48:51 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULES_CPP_CLAPTRAP_HPP
#define MODULES_CPP_CLAPTRAP_HPP

# include <iostream>

# define TITLE "MOD03 "

class ClapTrap
{
public:
	ClapTrap(void);

	ClapTrap(const std::string &name);

	~ClapTrap();

	ClapTrap(const ClapTrap &clapTrap);

	ClapTrap &operator=(const ClapTrap &clapTrap);

protected:
	std::string name;
	int hit_points, max_hit_points, energy_points, max_energy_points,
			level, melee_attack_damage, ranged_attack_damage, armor_damage_reduction;

public:
	const std::string &getName() const;

	void setName(const std::string &name);

	int getHitPoints() const;

	void setHitPoints(int hitPoints);

	int getMaxHitPoints() const;

	void setMaxHitPoints(int maxHitPoints);

	int getEnergyPoints() const;

	void setEnergyPoints(int energyPoints);

	int getMaxEnergyPoints() const;

	void setMaxEnergyPoints(int maxEnergyPoints);

	int getLevel() const;

	void setLevel(int level);

	int getMeleeAttackDamage() const;

	void setMeleeAttackDamage(int meleeAttackDamage);

	int getRangedAttackDamage() const;

	void setRangedAttackDamage(int rangedAttackDamage);

	int getArmorDamageReduction() const;

	void setArmorDamageReduction(int armorDamageReduction);

	void rangedAttack(const std::string &target);

	void meleeAttack(const std::string &target);

	void takeDamage(unsigned int amount);

	void beRepaired(unsigned int amount);
};


#endif //MODULES_CPP_CLAPTRAP_HPP
