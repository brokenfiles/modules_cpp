//
// Created by Louis Laurent on 25/06/2020.
//

#ifndef MODULE_CPP_SUPERMUTANT_HPP
#define MODULE_CPP_SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	virtual ~SuperMutant();

	SuperMutant();

	virtual void takeDamage(int damage);
};


#endif //MODULE_CPP_SUPERMUTANT_HPP
