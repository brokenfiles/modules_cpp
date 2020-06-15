#ifndef FRAG_TRAP__HPP
# define FRAG_TRAP__HPP

# include <iostream>
# include <random>
# include "ClapTrap.hpp"

# define TITLE "FR4G-TP "

class FragTrap : public ClapTrap
{
public:
	FragTrap(std::string name);

	FragTrap(const FragTrap &fragTrap);

	~FragTrap();

	FragTrap &operator=(const FragTrap &fragTrap);

	void vaulthunter_dot_exe(std::string const &target);
};

#endif