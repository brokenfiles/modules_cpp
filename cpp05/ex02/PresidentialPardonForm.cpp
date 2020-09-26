/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 12:05:30 by louis             #+#    #+#             */
/*   Updated: 2020/08/05 12:05:30 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	std::cout << getTarget() << " has been forgiven by Zaphod Beeblebrox" << std::endl;
}


