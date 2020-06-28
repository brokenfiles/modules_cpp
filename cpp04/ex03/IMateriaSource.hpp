//
// Created by Louis Laurent on 28/06/2020.
//

#ifndef MODULE_CPP_IMATERIASOURCE_HPP
#define MODULE_CPP_IMATERIASOURCE_HPP


#include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};


#endif //MODULE_CPP_IMATERIASOURCE_HPP
