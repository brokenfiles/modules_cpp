//
// Created by Louis Laurent on 28/06/2020.
//

#ifndef MODULE_CPP_ASSAULTTERMINATOR_HPP
#define MODULE_CPP_ASSAULTTERMINATOR_HPP


#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator();

	AssaultTerminator(const AssaultTerminator &assaultTerminator);

	AssaultTerminator &operator=(const AssaultTerminator &other);

	~AssaultTerminator();

	ISpaceMarine *clone() const;

	void battleCry() const;

	void rangedAttack() const;

	void meleeAttack() const;
};


#endif //MODULE_CPP_ASSAULTTERMINATOR_HPP
