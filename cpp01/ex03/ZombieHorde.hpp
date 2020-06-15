#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <random>
# include "Zombie.hpp"

class ZombieHorde {
private:
	Zombie		*horde;
	size_t		zombies_number;
	std::string	randomName(size_t len);
public:
	~ZombieHorde();
	ZombieHorde(size_t n, std::string type);
	void		announce(void);
};

#endif