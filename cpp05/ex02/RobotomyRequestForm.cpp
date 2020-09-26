/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 12:05:37 by louis             #+#    #+#             */
/*   Updated: 2020/08/05 12:05:37 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Creation Form", 72, 45, target)
{
	this->_fist_execution = true;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomyRequestForm) : Form(
		"Robotomy Creation Form", 72, 45, robotomyRequestForm.getTarget())
{
	this->_fist_execution = robotomyRequestForm._fist_execution;
	(*this) = robotomyRequestForm;
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
	if (_fist_execution) {
		std::cout << "* dzzzzzzzzzzzzzzzz *" << std::endl;
		std::cout << getTarget() << " has been robotomized..." << std::endl;
		this->_fist_execution = false;
	} else {
		std::cout << "kaboum... drill machine broke :(" << std::endl;
	}
}
