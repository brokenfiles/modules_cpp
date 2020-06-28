
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

int main()
{
	fct();
//	while (1); // (leaks test)
	return 0;
}