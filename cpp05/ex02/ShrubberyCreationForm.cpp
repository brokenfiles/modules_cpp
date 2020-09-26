/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 12:05:44 by louis             #+#    #+#             */
/*   Updated: 2020/08/05 12:05:44 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation Form", 145, 137, target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyCreationForm) : Form(
		"Shrubbery Creation Form", 145, 137, shrubberyCreationForm.getTarget())
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrubberyCreationForm)
{
	setTarget(shrubberyCreationForm.getTarget());
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
	Form::execute(executor);
	std::string filename = getTarget() + "_shrubbery";
	std::ofstream shrubbery;
	shrubbery.open(filename.c_str(), std::ofstream::out | std::ofstream::trunc);
	if (shrubbery.fail()) {
		std::cout << "Can't create file (probably permission problem)" << std::endl;
		return ;
	}
	shrubbery << "                                                         .\n"
				 "                                              .         ;  \n"
				 "                 .              .              ;%     ;;   \n"
				 "                   ,           ,                :;%  %;   \n"
				 "                    :         ;                   :;%;'     .,   \n"
				 "           ,.        %;     %;            ;        %;'    ,;\n"
				 "             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
				 "              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
				 "               ;%;      %;        ;%;        % ;%;  ,%;'\n"
				 "                `%;.     ;%;     %;'         `;%%;.%;'\n"
				 "                 `:;%.    ;%%. %@;        %; ;@%;%'\n"
				 "                    `:%;.  :;bd%;          %;@%;'\n"
				 "                      `@%:.  :;%.         ;@@%;'   \n"
				 "                        `@%.  `;@%.      ;@@%;         \n"
				 "                          `@%%. `@%%    ;@@%;        \n"
				 "                            ;@%. :@%%  %@@%;       \n"
				 "                              %@bd%%%bd%%:;     \n"
				 "                                #@%%%%%:;;\n"
				 "                                %@@%%%::;\n"
				 "                                %@@@%(o);  . '         \n"
				 "                                %@@@o%;:(.,'         \n"
				 "                            `.. %@@@o%::;         \n"
				 "                               `)@@@o%::;         \n"
				 "                                %@@(o)::;        \n"
				 "                               .%@@@@%::;         \n"
				 "                               ;%@@@@%::;.          \n"
				 "                              ;%@@@@%%:;;;. \n"
				 "                          ...;%@@@@@%%:;;;;,..    Gilo97" << std::endl;
	shrubbery.close();
}



