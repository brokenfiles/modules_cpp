#ifndef CLAP_TRAP__HPP
# define CLAP_TRAP__HPP

# include <iostream>

# define TITLE "FR4G-TP "

class ClapTrap
{
protected:
	std::string name;
	int hit_points, max_hit_points, energy_points, max_energy_points,
			level, melee_attack_damage, ranged_attack_damage, armor_damage_reduction;

public:
	ClapTrap(std::string name);

	~ClapTrap();

	ClapTrap(const ClapTrap &clapTrap)

	ClapTrap &operator=(const ClapTrap &clapTrap);

	void rangedAttack(std::string const &target);

	void meleeAttack(std::string const &target);

	void takeDamage(unsigned int amount);

	void beRepaired(unsigned int amount);
};

#endif