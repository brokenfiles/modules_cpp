/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 10:56:07 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 10:56:07 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_CPP_CHARACTER_HPP
#define MODULE_CPP_CHARACTER_HPP


#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string name;
	int ap;
	AWeapon *weapon;

public:

	Character(const std::string &name);

	Character(const Character &character);

	Character &operator=(const Character &character);

	virtual ~Character();

	void recoverAP();

	void equip(AWeapon *aWeapon);

	void attack(Enemy *enemy);

public:

	const std::string &getName() const;
	void setName(const std::string &name);

	int getAp() const;

	void setAp(int ap);

	AWeapon *getWeapon() const;

	void setWeapon(AWeapon *weapon);

};

std::ostream &operator<<(std::ostream &os, const Character &character);

#endif //MODULE_CPP_CHARACTER_HPP
