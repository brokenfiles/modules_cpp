//
// Created by Louis Laurent on 20/07/2020.
//

#include <random>
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
	data->n = rand() % 5;
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
	std::string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	std::random_device rd;
	std::mt19937 generator(rd());

	std::shuffle(alphabet.begin(), alphabet.end(), generator);
	return (alphabet.substr(0, len));
}

Data *Serializer::deserialize(void *raw)
{
	return (reinterpret_cast<Data*>(raw));
}



