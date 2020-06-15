#include "Pony.hpp"

void ponyOnTheStack()
{
	Pony *pony = new Pony("L'Oréal", "Black", 12);

	pony->eat("carrot");
	pony->run();
	pony->eat("bottle of speed");
	pony->setSpeed(45.5);
	pony->run();

	delete pony;
}

void ponyOnTheHeap()
{
	Pony pony("Garnier", "Brown", 4);

	pony.eat("apple");
	pony.run();
	pony.eat("pineapple");
	pony.setSpeed(3.4);
	pony.run();
}

int main(void)
{
	ponyOnTheStack();
	std::cout << std::endl;
	ponyOnTheHeap();
	return (0);
}