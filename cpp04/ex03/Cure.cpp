/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 11:00:57 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 11:00:57 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	AMateria::use(target);
}

AMateria *Cure::clone() const
{
	return new Cure();
}

Cure::Cure(const Cure &other) : AMateria(other.getType())
{}

Cure &Cure::operator=(const Cure &other)
{
	AMateria::operator=(other);
	return (*this);
}

Cure::~Cure()
{}


