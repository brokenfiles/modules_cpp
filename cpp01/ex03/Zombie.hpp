#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
private:
	std::string	name, type;
public:
	~Zombie();
	Zombie();
	Zombie(std::string name, std::string type);
	void		advert(void);
	void		setName(std::string name);
	void		setType(std::string type);
};

#endif