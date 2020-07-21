//
// Created by Louis Laurent on 30/06/2020.
//

#ifndef MODULE_CPP_INTERN_HPP
#define MODULE_CPP_INTERN_HPP


#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
	std::string _names[3];

	Form *(*_forms[3])(const std::string &target);

	static Form *createNewShrubberyCreationForm(const std::string &target);

	static Form *createNewRobotomyRequestForm(const std::string &target);

	static Form *createNewPresidentialPardonForm(const std::string &target);

	void init();

public:
	Intern();

	Intern(const Intern & intern);

	Intern &operator=(const Intern & intern);

	virtual ~Intern();

	Form *makeForm(std::string name, const std::string &target);

	class CantCreateFormException : public std::exception
	{
		virtual const char *what() const throw();
	};
};


#endif //MODULE_CPP_INTERN_HPP
