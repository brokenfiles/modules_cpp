//
// Created by Louis Laurent on 28/06/2020.
//

#include <iostream>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon Form", 25, 5, target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &presidentialPardonForm) : Form(
		"Presidential Pardon Form", 25, 5, presidentialPardonForm.getTarget())
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &presidentialPardonForm)
{
	setTarget(presidentialPardonForm.getTarget());
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void PresidentialPardonForm::execute(const Bureaucrat &executor)
{
	Form::execute(executor);
	std::cout << executor.getName() << " has been forgiven by Zaphod Beeblebrox" << std::endl;
}


