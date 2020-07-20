//
// Created by Louis Laurent on 28/06/2020.
//

#ifndef MODULE_CPP_SHRUBBERYCREATIONFORM_HPP
#define MODULE_CPP_SHRUBBERYCREATIONFORM_HPP


#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(std::string target);

	ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyCreationForm);

	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &shrubberyCreationForm);

	virtual ~ShrubberyCreationForm();

	void execute(Bureaucrat const &executor);
};


#endif //MODULE_CPP_SHRUBBERYCREATIONFORM_HPP
