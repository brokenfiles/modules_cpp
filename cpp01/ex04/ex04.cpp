#include <iostream>

int	main(void)
{
	std::string *brain_pointer = new std::string("HI THIS IS BRAIN");
	std::string &brain_ref = *brain_pointer;

	std::cout << "Pointer : " << *brain_pointer << std::endl;
	std::cout << "Ref     : " << brain_ref << std::endl;
	return (0);
}