//
// Created by Louis Laurent on 28/06/2020.
//

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
	this->_xp = 0;
}

AMateria::AMateria(const AMateria &materia)
{
	this->_xp = materia.getXP();
}

AMateria &AMateria::operator=(const AMateria &other)
{
	this->_xp = other.getXP();
	return (*this);
}

AMateria::~AMateria()
{}

std::string const &AMateria::getType() const
{
	return this->_type;
}

unsigned int AMateria::getXP() const
{
	return this->_xp;
}

void AMateria::use(ICharacter &target)
{
	this->_xp += 10;
	(void)target;
}





