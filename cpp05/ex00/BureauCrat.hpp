/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 02:15:51 by louis             #+#    #+#             */
/*   Updated: 2020/08/05 02:15:51 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_CPP_BUREAUCRAT_HPP
#define MODULE_CPP_BUREAUCRAT_HPP

#include <string>
#include <ostream>

class BureauCrat
{
private:
	std::string const name;
	int grade;
public:
	BureauCrat(std::string name, int grade);
	BureauCrat(const BureauCrat &bureauCrat);
	BureauCrat &operator=(const BureauCrat &bureauCrat);
	virtual ~BureauCrat();
	void incrementGrade();
	void decrementGrade();
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
std::ostream &operator<<(std::ostream &os, const BureauCrat &crat);

#endif //MODULE_CPP_BUREAUCRAT_HPP
