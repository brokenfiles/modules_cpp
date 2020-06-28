//
// Created by Louis Laurent on 28/06/2020.
//

#ifndef MODULE_CPP_CURE_HPP
#define MODULE_CPP_CURE_HPP


#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();

	Cure(const Cure &other);

	Cure &operator=(const Cure &other);

	~Cure();

	AMateria *clone() const;

	void use(ICharacter &target);
};


#endif //MODULE_CPP_CURE_HPP
