#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int main(void) {
	FragTrap fragTrap("Pierre");
	fragTrap.vaulthunter_dot_exe("Paul");
	FragTrap fragTrap1 = fragTrap;
	fragTrap1.vaulthunter_dot_exe("Jacques");
	ScavTrap scavTrap("John");
	scavTrap.challengeNewcomer(fragTrap.getName());
}