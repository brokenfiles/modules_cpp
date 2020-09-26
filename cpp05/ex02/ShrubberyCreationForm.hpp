/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 12:05:47 by louis             #+#    #+#             */
/*   Updated: 2020/08/05 12:05:47 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
