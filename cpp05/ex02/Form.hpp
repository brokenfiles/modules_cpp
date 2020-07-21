//
// Created by Louis Laurent on 28/06/2020.
//

#ifndef MODULE_CPP_FORM_HPP
#define MODULE_CPP_FORM_HPP


#include <string>
#include <ostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	bool _signed;
	const int _requiredToSign, _requiredToExecute;
	std::string _target;

public:
	Form(const std::string &name, const int requiredToSign, const int requiredToExecute, const std::string &target);

	Form(const Form &form);

	virtual ~Form();

	Form &operator=(const Form &form);

	void beSigned(Bureaucrat &bureaucrat);

	virtual void execute(const Bureaucrat &executor);

	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};

	class FormNotSignedException : public std::exception
	{
		virtual const char *what() const throw();
	};

	const std::string &getName() const;

	bool isSigned() const;

	const std::string &getTarget() const;

	int getRequiredToSign() const;

	int getRequiredToExecute() const;

	void setTarget(const std::string &target);
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif //MODULE_CPP_FORM_HPP
