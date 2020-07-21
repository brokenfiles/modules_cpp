//
// Created by Louis Laurent on 26/06/2020.
//

#ifndef MODULE_CPP_ISQUAD_HPP
#define MODULE_CPP_ISQUAD_HPP


#include "ISpaceMarine.hpp"

class ISquad
{
public:
	virtual ~ISquad() {};
	virtual int getCount() const = 0;
	virtual ISpaceMarine* getUnit(int) const = 0;
	virtual int push(ISpaceMarine*) = 0;
};


#endif //MODULE_CPP_ISQUAD_HPP
