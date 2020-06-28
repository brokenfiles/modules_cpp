//
// Created by Louis Laurent on 28/06/2020.
//

#ifndef MODULE_CPP_CHARACTER_HPP
#define MODULE_CPP_CHARACTER_HPP


#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria *_inventory[4];
	unsigned int _count;
public:
	Character(const std::string &name);

	Character(const Character &character);

	Character &operator=(Character const &character);

	virtual ~Character();

	void init_inventory();

	virtual const std::string &getName() const;

	virtual void equip(AMateria *m);

	virtual void unequip(int idx);

	virtual void use(int idx, ICharacter &target);
};


#endif //MODULE_CPP_CHARACTER_HPP
