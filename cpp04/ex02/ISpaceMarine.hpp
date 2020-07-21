//
// Created by Louis Laurent on 26/06/2020.
//

#ifndef MODULE_CPP_ISPACEMARINE_HPP
#define MODULE_CPP_ISPACEMARINE_HPP


class ISpaceMarine
{
public:
	virtual ~ISpaceMarine() {};
	virtual ISpaceMarine* clone() const = 0;
	virtual void battleCry() const = 0;
	virtual void rangedAttack() const = 0;
	virtual void meleeAttack() const = 0;
};


#endif //MODULE_CPP_ISPACEMARINE_HPP
