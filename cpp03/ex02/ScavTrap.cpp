#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : name(name), hit_points(100), max_hit_points(100), energy_points(50),
									   max_energy_points(50),
									   level(1), melee_attack_damage(20), ranged_attack_damage(15),
									   armor_damage_reduction(3)
{
	srand(time(NULL));
	std::cout << "Le scavtrap " << name << " est né (constructeur)" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap)
{
	*this = scavTrap;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap)
{
	this->hit_points = scavTrap.hit_points;
	this->max_hit_points = scavTrap.max_hit_points;
	this->energy_points = scavTrap.energy_points;
	this->max_energy_points = scavTrap.max_energy_points;
	this->level = scavTrap.level;
	this->melee_attack_damage = scavTrap.melee_attack_damage;
	this->ranged_attack_damage = scavTrap.ranged_attack_damage;
	this->armor_damage_reduction = scavTrap.armor_damage_reduction;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Le scavtrap " << name << " est mort (destructeur)" << std::endl;
}

void ScavTrap::challengeNewcomer(const std::string &target)
{
	std::string challenges[] = {"Défi 1", "Défi 2", "Défi 3"};
	int random_number = rand() % 3;

	std::cout << TITLE << "(scavtrap) " << this->name << " met au défi " << target << " de "
			  << challenges[random_number] << std::endl;
}