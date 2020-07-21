//
// Created by Louis Laurent on 25/06/2020.
//

#ifndef MODULES_CPP_VICTIM_HPP
#define MODULES_CPP_VICTIM_HPP

#include <iostream>

class Victim
{
private:
	std::string name;
public:
	const std::string &getName() const;

	void setName(const std::string &name);

public:
	Victim(const std::string &name);

	Victim(const Victim &victim);

	virtual ~Victim();

	Victim &operator=(const Victim &victim);

	virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &os, const Victim &victim);

#endif //MODULES_CPP_VICTIM_HPP
