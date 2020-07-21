
#include <iostream>
#include "BureauCrat.hpp"

int main(void) {
	try {
		BureauCrat bruce("Bruce", 1);
		bruce.decrementGrade();
		std::cout << bruce << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}