//
// Created by Louis Laurent on 23/06/2020.
//

#ifndef MODULES_CPP_SCAVTRAP_HPP
#define MODULES_CPP_SCAVTRAP_HPP


#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	~ScavTrap();

	ScavTrap(const std::string &name);

	void challengeNewcomer(const std::string &target);
};


#endif //MODULES_CPP_SCAVTRAP_HPP
