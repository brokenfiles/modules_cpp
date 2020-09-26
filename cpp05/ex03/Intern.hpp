/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 12:25:37 by louis             #+#    #+#             */
/*   Updated: 2020/08/05 12:25:37 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	Intern(const Intern &intern);
	Intern &operator=(const Intern &intern);
	virtual ~Intern();
	Form *makeForm(std::string name, const std::string &target);
	class CantCreateFormException : public std::exception
	{
		virtual const char *what() const throw();
	};
};

#endif //MODULE_CPP_INTERN_HPP
