//
// Created by Louis Laurent on 25/06/2020.
//

#ifndef MODULES_CPP_POWERFIST_HPP
#define MODULES_CPP_POWERFIST_HPP


#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist();

	virtual ~PowerFist();

	virtual void attack() const;
};


#endif //MODULES_CPP_POWERFIST_HPP
