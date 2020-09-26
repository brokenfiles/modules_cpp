/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 11:01:04 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 11:01:04 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}

AMateria *Ice::clone() const
{
	return new Ice();
}

Ice::Ice(const Ice &other) : AMateria(other.getType())
{}

Ice &Ice::operator=(const Ice &other)
{
	AMateria::operator=(other);
	return (*this);
}

Ice::~Ice()
{}


