#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
private:
	std::string	name, type;
public:
	~Zombie();
	Zombie(std::string name, std::string type);
	void		advert(void);
};

#endif