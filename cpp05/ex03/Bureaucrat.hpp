/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 12:25:25 by louis             #+#    #+#             */
/*   Updated: 2020/08/05 12:25:25 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_CPP_BUREAUCRAT_HPP
#define MODULE_CPP_BUREAUCRAT_HPP

#include <string>
#include <ostream>
#include "Form.hpp"

class Form;
class Bureaucrat
{
private:
	std::string name;
	int grade;
public:
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat &bureaucrat);
	Bureaucrat &operator=(const Bureaucrat &bureaucrat);
	virtual ~Bureaucrat();
	void incrementGrade();
	void decrementGrade();
	void signForm(Form &form);
	void executeForm(Form &form);
	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};
	const std::string &getName() const;
	int getGrade() const;

};
std::ostream &operator<<(std::ostream &os, const Bureaucrat &crat);

#endif //MODULE_CPP_BUREAUCRAT_HPP
