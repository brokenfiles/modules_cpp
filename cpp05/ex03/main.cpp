#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	Bureaucrat john("Mathis Degryck", 2);
	ShrubberyCreationForm form("Population");
	john.signForm(form);
	john.executeForm(form);
	RobotomyRequestForm form1("Society");
	john.signForm(form1);
	john.executeForm(form1);
	PresidentialPardonForm form2("Bosses");
	john.signForm(form2);
	john.executeForm(form2);
}