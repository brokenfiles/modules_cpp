/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 12:27:11 by louis             #+#    #+#             */
/*   Updated: 2020/08/05 12:27:11 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	Intern someRandomIntern;
	Form *rrf;
	try
	{
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		Bureaucrat randomBureaucrat("Random Bureaucrat", 2);
		randomBureaucrat.signForm(*rrf);
		randomBureaucrat.executeForm(*rrf);
		delete rrf;
	} catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		rrf = someRandomIntern.makeForm("shrubbery creation", "Blender");
		Bureaucrat randomBureaucrat("Random Bureaucrat", 20);
		randomBureaucrat.signForm(*rrf);
		randomBureaucrat.executeForm(*rrf);
		delete rrf;
	} catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}