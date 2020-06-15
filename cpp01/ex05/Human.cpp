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