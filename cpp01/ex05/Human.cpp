/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 11:00:57 by louis             #+#    #+#             */
/*   Updated: 2020/07/24 11:00:57 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
	brain = new Brain();
}

Human::~Human()
{
	delete brain;
}

std::string Human::identify(void)
{
	return (brain->identify());
}

Brain &Human::getBrain()
{
	return *brain;
}

Human::Human(const Human &human)
{
	(*this) = human;
}

Human &Human::operator=(const Human &human)
{
	this->brain = human.brain;
	return (*this);
}

