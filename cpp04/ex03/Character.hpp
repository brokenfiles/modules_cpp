/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 11:00:53 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 11:00:53 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
