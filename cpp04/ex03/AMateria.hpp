//
// Created by Louis Laurent on 28/06/2020.
//

#ifndef MODULE_CPP_AMATERIA_HPP
#define MODULE_CPP_AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
private:
	std::string _type;
	unsigned int _xp;
public:
	AMateria(std::string const & type);
	AMateria(const AMateria &materia);
	AMateria &operator=(const AMateria &other);
	virtual ~AMateria();
	std::string const & getType() const;
	unsigned int getXP() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter & target);
};


#endif //MODULE_CPP_AMATERIA_HPP
