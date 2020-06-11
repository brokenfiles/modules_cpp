#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent {
private:
	std::string	type;
public:
	Zombie		*newZombie(std::string name);
	void		setZombieType(std::string type);
};

#endif