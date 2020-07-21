#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
	Intern someRandomIntern;
	Form *rrf;
	try {
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		Bureaucrat randomBureaucrat("Random Bureaucrat", 2);
		randomBureaucrat.signForm(*rrf);
		randomBureaucrat.executeForm(*rrf);
		delete rrf;
	} catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
}