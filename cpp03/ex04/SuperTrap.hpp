//
// Created by Louis Laurent on 23/06/2020.
//

#ifndef MODULES_CPP_SUPERTRAP_HPP
#define MODULES_CPP_SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	SuperTrap(const std::string &name);

	~SuperTrap();

	void rangedAttack(const std::string &target);

	void meleeAttack(const std::string &target);
};


#endif //MODULES_CPP_SUPERTRAP_HPP
