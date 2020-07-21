//
// Created by Louis Laurent on 22/06/2020.
//

#ifndef MODULES_CPP_FRAGTRAP_HPP
#define MODULES_CPP_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:

	FragTrap(const std::string &name);

	~FragTrap();

	void vaulthunter_dot_exe(const std::string &target);
};


#endif //MODULES_CPP_FRAGTRAP_HPP
