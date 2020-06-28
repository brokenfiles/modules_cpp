//
// Created by Louis Laurent on 28/06/2020.
//

#ifndef MODULE_CPP_ICE_HPP
#define MODULE_CPP_ICE_HPP


#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();

	Ice(const Ice &other);

	Ice &operator=(const Ice &other);

	~Ice();

	AMateria *clone() const;

	void use(ICharacter &target);
};


#endif //MODULE_CPP_ICE_HPP
