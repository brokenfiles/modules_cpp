/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 13:30:07 by louis             #+#    #+#             */
/*   Updated: 2020/08/07 13:30:07 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "Serializer.hpp"

Serializer::Serializer()
{
	srand(time(NULL));
}

Serializer::~Serializer()
{}

Serializer &Serializer::operator=(const Serializer &serializer)
{
	(void)serializer;
	return (*this);
}

Serializer::Serializer(const Serializer &serializer)
{
	(void)serializer;
}

void *Serializer::serialize(void)
{
	this->data = new Data;
	data->n = random_number(0, 16);
	data->s1 = randomString(8);
	data->s2 = randomString(8);
	return (data);
}

Data *Serializer::getData()
{
	return data;
}

std::string Serializer::randomString(size_t len)
{
	std::string str;

	for (size_t i = 0; i < len; ++i)
	{
		size_t rdm = random_number(0, 24);
		str += (char)(rdm + (rdm % 2 == 0 ? 65 : 97));
	}
	return str;
}

Data *Serializer::deserialize(void *raw)
{
	return (reinterpret_cast<Data*>(raw));
}

size_t Serializer::random_number(size_t min, size_t max)
{
	return (rand() % (max - min + 1) + min);
}



