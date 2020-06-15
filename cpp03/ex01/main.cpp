#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	FragTrap fragTrap("Jack");
	fragTrap.rangedAttack("L'ange");
	fragTrap.takeDamage(50);
	fragTrap.vaulthunter_dot_exe("Mike");
	fragTrap.beRepaired(40);
	ScavTrap scavTrap("Tony");
	scavTrap.challengeNewcomer("Jack");
}