/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 11:50:17 by louis             #+#    #+#             */
/*   Updated: 2020/08/05 11:50:17 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BureauCrat.hpp"

BureauCrat::BureauCrat(std::string name, int grade) : name(name), grade(grade)
{
	if (grade < 1) {
		throw BureauCrat::GradeTooHighException();
	} else if (grade > 150) {
		throw BureauCrat::GradeTooLowException();
	}
}

BureauCrat::BureauCrat(const BureauCrat &bureauCrat)
{
	this->grade = bureauCrat.grade;
}

BureauCrat &BureauCrat::operator=(const BureauCrat &bureauCrat)
{
	this->grade = bureauCrat.grade;
	return (*this);
}

BureauCrat::~BureauCrat()
{}

const std::string &BureauCrat::getName() const
{
	return name;
}

int BureauCrat::getGrade() const
{
	return grade;
}

void BureauCrat::incrementGrade()
{
	if (getGrade() > 1) {
		this->grade--;
	} else {
		throw BureauCrat::GradeTooHighException();
	}
}

void BureauCrat::decrementGrade()
{
	if (getGrade() < 150) {
		this->grade++;
	} else {
		throw BureauCrat::GradeTooLowException();
	}
}

const char *BureauCrat::GradeTooHighException::what() const throw()
{
	return "Exception: grade to high !";
}

const char *BureauCrat::GradeTooLowException::what() const throw()
{
	return "Exception: grade to low !";
}

std::ostream &operator<<(std::ostream &os, const BureauCrat &crat)
{
	os << crat.getName() << ", bureaucrat grade " << crat.getGrade();
	return os;
}