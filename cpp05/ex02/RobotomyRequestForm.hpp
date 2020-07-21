//
// Created by Louis Laurent on 28/06/2020.
//

#ifndef MODULE_CPP_ROBOTOMYREQUESTFORM_HPP
#define MODULE_CPP_ROBOTOMYREQUESTFORM_HPP


#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(std::string target);

	RobotomyRequestForm(const RobotomyRequestForm &robotomyRequestForm);

	RobotomyRequestForm &operator=(const RobotomyRequestForm &robotomyRequestForm);

	virtual ~RobotomyRequestForm();

	void execute(Bureaucrat const &executor);
};


#endif //MODULE_CPP_ROBOTOMYREQUESTFORM_HPP
