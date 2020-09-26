/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 10:55:40 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 10:55:40 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const std::string &name, const std::string &title) : name(name), title(title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &sorcerer)
{
	this->name = sorcerer.name;
	this->title = sorcerer.title;
	return (*this);
}

Sorcerer::Sorcerer(const Sorcerer &sorcerer)
{
	*this = sorcerer;
}

const std::string &Sorcerer::getName() const
{
	return name;
}

void Sorcerer::setName(const std::string &name)
{
	Sorcerer::name = name;
}

const std::string &Sorcerer::getTitle() const
{
	return title;
}

void Sorcerer::setTitle(const std::string &title)
{
	Sorcerer::title = title;
}

void Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::ostream &operator<<(std::ostream &os, const Sorcerer &sorcerer)
{
	os << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << std::endl;
	return os;
}