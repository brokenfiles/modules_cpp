//
// Created by Louis Laurent on 28/06/2020.
//

#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade)
{
	if (grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	} else if (grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat)
{
	this->grade = bureaucrat.grade;
	this->name = bureaucrat.name;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	this->grade = bureaucrat.grade;
	this->name = bureaucrat.name;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{}

const std::string &Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

void Bureaucrat::incrementGrade()
{
	if (getGrade() > 1) {
		this->grade--;
	} else {
		throw Bureaucrat::GradeTooHighException();
	}
}

void Bureaucrat::decrementGrade()
{
	if (getGrade() < 150) {
		this->grade++;
	} else {
		throw Bureaucrat::GradeTooLowException();
	}
}

void Bureaucrat::signForm(Form &form)
{
	try {
		form.beSigned(*this);
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
	} catch (std::exception &e) {
		std::cout << this->getName() << " cant sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Exception: grade to high !";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Exception: grade to low !";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &crat)
{
	os << crat.getName() << ", bureaucrat grade " << crat.getGrade();
	return os;
}