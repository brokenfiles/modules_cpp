//
// Created by Louis Laurent on 28/06/2020.
//

#ifndef MODULE_CPP_TACTICALMARINE_HPP
#define MODULE_CPP_TACTICALMARINE_HPP


#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine();

	TacticalMarine(const TacticalMarine &marine);

	TacticalMarine &operator=(const TacticalMarine &marine);

	~TacticalMarine();

	ISpaceMarine *clone() const;

	void battleCry() const;

	void rangedAttack() const;

	void meleeAttack() const;
};


#endif //MODULE_CPP_TACTICALMARINE_HPP
