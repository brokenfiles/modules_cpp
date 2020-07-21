#include "SuperTrap.hpp"

int main(void) {
	SuperTrap superTrap("Bidule");
	std::cout << "SuperTrap's name : " << superTrap.getName() << std::endl;
	superTrap.meleeAttack("Target 1");
	superTrap.rangedAttack("Target 2");
}