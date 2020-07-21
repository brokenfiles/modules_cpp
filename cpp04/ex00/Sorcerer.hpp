//
// Created by Louis Laurent on 25/06/2020.
//

#ifndef MODULES_CPP_SORCERER_HPP
#define MODULES_CPP_SORCERER_HPP


#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
private:
	std::string name, title;
public:
	const std::string &getName() const;

	void setName(const std::string &name);

	const std::string &getTitle() const;

	void setTitle(const std::string &title);

public:
	Sorcerer(const std::string& name, const std::string& title);

	Sorcerer(const Sorcerer &sorcerer);

	Sorcerer &operator=(const Sorcerer &sorcerer);

	virtual ~Sorcerer();

	void polymorph(Victim const &victim) const;
};

std::ostream &operator<<(std::ostream &os, const Sorcerer &sorcerer);

#endif //MODULES_CPP_SORCERER_HPP
