/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 12:05:24 by louis             #+#    #+#             */
/*   Updated: 2020/08/05 12:05:24 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	Bureaucrat john("John Doe", 1);
	ShrubberyCreationForm form("Population");
	john.signForm(form);
	john.executeForm(form);
	RobotomyRequestForm form1("Society");
	john.signForm(form1);
	john.executeForm(form1);
	PresidentialPardonForm form2("Bosses");
	john.signForm(form2);
	john.executeForm(form2);
}