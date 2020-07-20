
#include <iostream>
#include "Array.hpp"
#include "Array.cpp"

int main(void) {
	Array<int> test(5);
	test[4] = 7;
	Array<int> test2(test);
	test2[4] = 4;
	Array<char> test3(5);
	test3[0] = 'y';
	std::cout << test3[0] << std::endl;
	std::cout << test[4] << std::endl;
	std::cout << test2[4] << std::endl;
}