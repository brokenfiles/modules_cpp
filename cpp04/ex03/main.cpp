/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 11:01:17 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 11:01:17 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Cure.hpp"

void fct() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* moi = new Character("moi");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	moi->equip(tmp);
	tmp = src->createMateria("cure");
	moi->equip(tmp);
	ICharacter* bob = new Character("bob");
	moi->use(0, *bob);
	moi->use(1, *bob);
	moi->use(-1, *bob);
	moi->use(3, *bob);
	bob->equip(src->createMateria("ice"));
	bob->use(0, *moi);
	delete bob;
	delete moi;
	delete src;
}

int real_main() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* moi = new Character("moi");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	moi->equip(tmp);
	tmp = src->createMateria("cure");
	moi->equip(tmp);
	ICharacter* bob = new Character("bob");
	moi->use(0, *bob);
	moi->use(1, *bob);
	delete bob;
	delete moi;
	delete src;
	return 0;
}

int main()
{
	fct();
	std::cout << "REAL MAIN : " << std::endl;
	real_main();
//	while (1); // (leaks test)
	return 0;
}