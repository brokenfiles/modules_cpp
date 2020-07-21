//
// Created by Louis Laurent on 28/06/2020.
//

#include <iostream>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Creation Form", 72, 45, target)
{
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomyRequestForm) : Form(
		"Robotomy Creation Form", 72, 45, robotomyRequestForm.getTarget())
{
	srand(time(NULL));
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &robotomyRequestForm)
{
	setTarget(robotomyRequestForm.getTarget());
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void RobotomyRequestForm::execute(Bureaucrat const &executor)
{
	Form::execute(executor);
	std::cout << "* dzzzzzzzzzzzzzzzz *" << std::endl;
	if (rand() % 2 == 0) {
		std::cout << getTarget() << " has been robotomized..." << std::endl;
	} else {
		std::cout << "kaboum... drill machine broke :(" << std::endl;
	}
}
