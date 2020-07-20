//
// Created by Louis Laurent on 28/06/2020.
//

#include "Form.hpp"

Form::Form(const std::string& name, const int requiredToSign, const int requiredToExecute) : _name(name),
																										   _signed(false),
																										   _requiredToSign(
																												   requiredToSign),
																										   _requiredToExecute(
																												   requiredToExecute)
{
	if (requiredToSign < 1 || requiredToExecute < 1) {
		throw Form::GradeTooHighException();
	} else if (requiredToSign > 150 || requiredToExecute > 150) {
		throw Form::GradeTooLowException();
	}
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os << "Name : " << form.getName() << "\nSigned : " << form.isSigned() << "\nGrade required to sign : " << form.getRequiredToSign()
	   << "\nGrade required to Execute : " << form.getRequiredToExecute();
	return os;
}

Form::Form(const Form &form) : _name(form._name), _signed(form._signed), _requiredToSign(form._requiredToSign), _requiredToExecute(form._requiredToExecute)
{}

Form::~Form()
{}

Form &Form::operator=(const Form &form)
{
	this->_signed = form._signed;
	return (*this);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_requiredToSign) {
		throw Form::GradeTooHighException();
	}
	this->_signed = true;
}

const std::string &Form::getName() const
{
	return _name;
}

bool Form::isSigned() const
{
	return _signed;
}

int Form::getRequiredToSign() const
{
	return _requiredToSign;
}

int Form::getRequiredToExecute() const
{
	return _requiredToExecute;
}


const char *Form::GradeTooHighException::what() const throw ()
{
	return "bureaucrat's grade is to high";
}

const char *Form::GradeTooLowException::what() const throw ()
{
	return "bureaucrat's grade is to low";
}
