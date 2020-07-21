//
// Created by Louis Laurent on 25/06/2020.
//

#ifndef MODULES_CPP_PLASMARIFLE_HPP
#define MODULES_CPP_PLASMARIFLE_HPP


#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	virtual void attack() const;

	virtual ~PlasmaRifle();

	PlasmaRifle();
};


#endif //MODULES_CPP_PLASMARIFLE_HPP
