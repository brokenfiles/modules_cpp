//
// Created by Louis Laurent on 22/06/2020.
//

#ifndef MODULES_CPP_CLAPTRAP_HPP
#define MODULES_CPP_CLAPTRAP_HPP

# include <iostream>

# define TITLE "MOD03 "

class ClapTrap
{
public:
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
};


#endif //MODULES_CPP_CLAPTRAP_HPP
