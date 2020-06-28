//
// Created by Louis Laurent on 28/06/2020.
//

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}

AMateria *Ice::clone() const
{
	return new Ice();
}

Ice::Ice(const Ice &other) : AMateria(other.getType())
{}

Ice &Ice::operator=(const Ice &other)
{
	AMateria::operator=(other);
	return (*this);
}

Ice::~Ice()
{}


