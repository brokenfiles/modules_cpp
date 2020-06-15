#ifndef SCAV_TRAP__HPP
# define SCAV_TRAP__HPP

# include "FragTrap.hpp"

class ScavTrap
{
private:
	std::string name;
	int hit_points, max_hit_points, energy_points, max_energy_points,
			level, melee_attack_damage, ranged_attack_damage, armor_damage_reduction;
public:
	ScavTrap(std::string name);

	ScavTrap(const ScavTrap &scavTrap);

	~ScavTrap();

	ScavTrap &operator=(const ScavTrap &scavTrap);

	void rangedAttack(std::string const &target);

	void meleeAttack(std::string const &target);

	void takeDamage(unsigned int amount);

	void beRepaired(unsigned int amount);

	void challengeNewcomer(const std::string &target);
};

#endif