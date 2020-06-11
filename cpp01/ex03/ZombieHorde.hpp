#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <random>
# include "Zombie.hpp"

class ZombieEvent {
private:
	std::string	type;
	std::string	randomName(size_t len);
public:
	Zombie		*randomChump(void);
	Zombie		*newZombie(std::string name);
	void		setZombieType(std::string type);
};

#endif