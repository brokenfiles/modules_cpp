/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 12:05:33 by louis             #+#    #+#             */
/*   Updated: 2020/08/05 12:05:33 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
