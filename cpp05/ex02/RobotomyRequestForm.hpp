/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 12:05:40 by louis             #+#    #+#             */
/*   Updated: 2020/08/05 12:05:40 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_CPP_ROBOTOMYREQUESTFORM_HPP
#define MODULE_CPP_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	bool _fist_execution;
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &robotomyRequestForm);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &robotomyRequestForm);
	virtual ~RobotomyRequestForm();
	void execute(Bureaucrat const &executor);
};

#endif //MODULE_CPP_ROBOTOMYREQUESTFORM_HPP
