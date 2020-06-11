#include "Pony.hpp"

int	main(void) {
	Pony *pony = new Pony();
	pony->name = "L'Oréal";
	pony->eat("Carrot");

	Pony *pony2 = new Pony();
	pony2->name = "Garnier";
	pony2->eat("Apple");
}