//
// Created by Louis Laurent on 23/06/2020.
//

#ifndef MODULES_CPP_NINJATRAP_HPP
#define MODULES_CPP_NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
public:
	~NinjaTrap();

	NinjaTrap(const std::string &name);

	void ninjaShoebox(FragTrap &clapTrap);

	void ninjaShoebox(ScavTrap &clapTrap);

	void ninjaShoebox(NinjaTrap &clapTrap);
};


#endif //MODULES_CPP_NINJATRAP_HPP
