/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 10:56:17 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 10:56:17 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "SuperMutant.hpp"
#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "RadScorpion.hpp"
#include "PowerFist.hpp"

int main(void)
{
	Character* moi = new Character("moi");
	std::cout << *moi << std::endl;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	moi->equip(pr);
	std::cout << *moi << std::endl;
	moi->equip(pf);
	moi->attack(b);
	std::cout << *moi << std::endl;
	moi->equip(pr);
	std::cout << *moi << std::endl;
	moi->attack(b);
	std::cout << *moi << std::endl;
	moi->attack(b);
	std::cout << *moi << std::endl;
	delete moi;
	delete pr;
	delete pf;
	return 0;
}