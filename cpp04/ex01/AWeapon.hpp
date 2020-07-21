//
// Created by Louis Laurent on 25/06/2020.
//

#ifndef MODULES_CPP_AWEAPON_HPP
#define MODULES_CPP_AWEAPON_HPP

#include <iostream>

class AWeapon
{
private:
	std::string name;
	int apcost, damage;

public:
	AWeapon(std::string const &name, int apcost, int damage);

	AWeapon(const AWeapon &aWeapon);

	AWeapon &operator=(const AWeapon &aWeapon);

	virtual ~AWeapon();

	virtual void attack() const = 0;

public:

	const std::string &getName() const;

	void setName(const std::string &name);

	int getApcost() const;

	void setApcost(int apcost);

	int getDamage() const;

	void setDamage(int damage);
};


#endif //MODULES_CPP_AWEAPON_HPP
