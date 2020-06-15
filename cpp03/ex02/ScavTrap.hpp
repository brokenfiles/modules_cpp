#ifndef SCAV_TRAP__HPP
# define SCAV_TRAP__HPP

# include "FragTrap.hpp"
# include "ClapTrap.hpp"

class ScavTrap
{
public:
	ScavTrap(std::string name);

	ScavTrap(const ScavTrap &scavTrap);

	~ScavTrap();

	ScavTrap &operator=(const ScavTrap &scavTrap);

	void challengeNewcomer(const std::string &target);
};

#endif