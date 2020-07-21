
#include <iostream>
#include "easyfind.hpp"

int main(void) {
	std::list<int> list;
	list.push_back(3);
	list.push_back(4);
	list.push_back(5);
	try {
		int index = easyfind(list, 4);
		std::cout << "value found at index " << index << std::endl;
	} catch (std::exception &e) {
		std::cout << "cant found value" << std::endl;
	}
	return 0;
}
