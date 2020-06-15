#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	std::cout << "Le constructeur de claptrap a été appelé" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Le desctructeur de claptrap a été appelé" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
	*this = clapTrap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &clapTrap)
{
	this->hit_points = clapTrap.hit_points;
	this->max_hit_points = clapTrap.max_hit_points;
	this->energy_points = clapTrap.energy_points;
	this->max_energy_points = clapTrap.max_energy_points;
	this->level = clapTrap.level;
	this->melee_attack_damage = clapTrap.melee_attack_damage;
	this->ranged_attack_damage = clapTrap.ranged_attack_damage;
	this->armor_damage_reduction = clapTrap.armor_damage_reduction;
	return (*this);
}

void ClapTrap::rangedAttack(const std::string &target)
{
	std::cout << TITLE << this->name << " attaque " << target << " à distance, causant "
			  << this->ranged_attack_damage
			  << " points de dégâts !" << std::endl;
}

void ClapTrap::meleeAttack(const std::string &target)
{
	std::cout << TITLE << this->name << " attaque " << target << " en mélée, causant "
			  << this->melee_attack_damage
			  << " points de dégâts !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	int damages = amount - this->armor_damage_reduction;
	if (damages < 0) damages = 0;
	if (this->hit_points <= damages)
	{
		this->hit_points = 0;
		std::cout << TITLE << this->name << " est mort " << std::endl;
	}
	else
	{
		this->hit_points -= damages;
		std::cout << TITLE << this->name << " a pris " << damages << " points de dégâts !"
				  << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	int heal = ((unsigned int)this->hit_points + amount > (unsigned int)this->max_hit_points) ? this->max_hit_points - this->hit_points : amount;
	int heal_energy = ((unsigned int)this->energy_points + amount > (unsigned int)this->max_energy_points) ? this->max_energy_points -
																											 this->energy_points : amount;
	this->hit_points += heal;
	this->energy_points += heal_energy;
	if (heal)
	{
		std::cout << TITLE << this->name << " a été soigné de " << heal << " points de dégâts !"
				  << std::endl;
	}
	else
	{
		std::cout << TITLE << this->name
				  << " n'a pas été soigné car des points de dégâts sont déjà pleins"
				  << std::endl;
	}
	if (heal_energy)
	{
		std::cout << TITLE << this->name << " a récupéré " << heal_energy << " points d'énergie !"
				  << std::endl;
	}
	else
	{
		std::cout << TITLE << this->name
				  << " n'a pas récupéré de point d'énergie car des points de d'énergie sont déjà pleins"
				  << std::endl;
	}
}