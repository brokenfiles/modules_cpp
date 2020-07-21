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
	return 0;
}