//
// Created by Louis Laurent on 25/06/2020.
//

#ifndef MODULES_CPP_PEON_HPP
#define MODULES_CPP_PEON_HPP


#include "Victim.hpp"

class Peon : public Victim
{
public:
	virtual ~Peon();

	Peon(const std::string &name);

	void getPolymorphed() const;
};


#endif //MODULES_CPP_PEON_HPP
