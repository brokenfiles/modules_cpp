#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : name(name), hit_points(100), max_hit_points(100), energy_points(100),
									   max_energy_points(100),
									   level(1), melee_attack_damage(30), ranged_attack_damage(20),
									   armor_damage_reduction(5)
{
	srand(time(NULL));
	std::cout << "Le fragtrap " << name << " est né (constructeur)" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap)
{
	*this = fragTrap;
}

FragTrap::~FragTrap()
{
	std::cout << "Le fragtrap " << name << " est mort (destructeur)" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrap)
{
	this->hit_points = fragTrap.hit_points;
	this->max_hit_points = fragTrap.max_hit_points;
	this->energy_points = fragTrap.energy_points;
	this->max_energy_points = fragTrap.max_energy_points;
	this->level = fragTrap.level;
	this->melee_attack_damage = fragTrap.melee_attack_damage;
	this->ranged_attack_damage = fragTrap.ranged_attack_damage;
	this->armor_damage_reduction = fragTrap.armor_damage_reduction;
	return (*this);
}

void FragTrap::vaulthunter_dot_exe(const std::string &target)
{
	const int energy_cost = 25;
	if (energy_points - energy_cost < 0)
	{
		std::cout << TITLE << "(fragtrap) " << this->name << " n'a pas assez d'énergie !" << std::endl;
	}
	else
	{
		this->energy_points -= energy_cost;
		std::string attack_names[] = {"Clavier", "Serviette", "Kyr", "Écran", "Lucille"};
		int attack_amount[] = {5, 30, 70, 23, 150};

		int random_number = rand() % 4 + 1;
		std::cout << TITLE << "(fragtrap) " << this->name << " attaque avec " << attack_names[random_number] << " ! Il inflige "
				  << attack_amount[random_number] << " points de dégâts à " << target << std::endl;
	}
}