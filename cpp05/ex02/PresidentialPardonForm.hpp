//
// Created by Louis Laurent on 28/06/2020.
//

#ifndef MODULE_CPP_PRESIDENTIALPARDONFORM_HPP
#define MODULE_CPP_PRESIDENTIALPARDONFORM_HPP


#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &presidentialPardonForm);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &presidentialPardonForm);
	virtual ~PresidentialPardonForm();
	void execute(const Bureaucrat & executor);
};


#endif //MODULE_CPP_PRESIDENTIALPARDONFORM_HPP
