//
// Created by Louis Laurent on 30/06/2020.
//

#include <iostream>
#include "Intern.hpp"

Form *Intern::makeForm(std::string name, const std::string & target)
{
	for (int i = 0; i < 3; ++i)
	{
		if (name == _names[i]) {
			return _forms[i](target);
		}
	}
	throw Intern::CantCreateFormException();
	return NULL;
}

Form *Intern::createNewShrubberyCreationForm(const std::string &target)
{
	Form *form = new ShrubberyCreationForm(target);
	std::cout << "Intern creates form " << form->getName() << std::endl;
	return form;
}

Form *Intern::createNewRobotomyRequestForm(const std::string &target)
{
	Form *form = new RobotomyRequestForm(target);
	std::cout << "Intern creates form " << form->getName() << std::endl;
	return form;
}

Form *Intern::createNewPresidentialPardonForm(const std::string &target)
{
	Form *form = new PresidentialPardonForm(target);
	std::cout << "Intern creates form " << form->getName() << std::endl;
	return form;
}

Intern::Intern()
{
	init();
}

Intern::~Intern()
{}

Intern &Intern::operator=(const Intern &intern)
{
	(void)intern;
	return (*this);
}

Intern::Intern(const Intern &intern)
{
	(void)intern;
	init();
}

void Intern::init()
{
	this->_names[0] = "presidential pardon";
	this->_forms[0] = &Intern::createNewPresidentialPardonForm;
	this->_names[1] = "robotomy request";
	this->_forms[1] = &Intern::createNewRobotomyRequestForm;
	this->_names[2] = "shrubbery creation";
	this->_forms[2] = &Intern::createNewShrubberyCreationForm;
}

const char *Intern::CantCreateFormException::what() const throw()
{
	return "Intern can't create this form... He's new";
}
