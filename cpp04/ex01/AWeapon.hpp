/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 10:55:58 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 10:55:58 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
