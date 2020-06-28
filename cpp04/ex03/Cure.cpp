//
// Created by Louis Laurent on 28/06/2020.
//

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	AMateria::use(target);
}

AMateria *Cure::clone() const
{
	return new Cure();
}

Cure::Cure(const Cure &other) : AMateria(other.getType())
{}

Cure &Cure::operator=(const Cure &other)
{
	AMateria::operator=(other);
	return (*this);
}

Cure::~Cure()
{}


