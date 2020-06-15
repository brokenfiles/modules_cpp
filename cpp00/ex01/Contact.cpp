/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/10 16:17:54 by louis             #+#    #+#             */
/*   Updated: 2020/06/10 16:17:54 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

void Contact::read_infos(void)
{
	int index = 0;
	std::string data_needed[11] = {"First name", "Last name", "Nickname", "Login", "Postal code",
								   "Email address", "Phone number", "Birthday", "Favorite meal", "Underwear color",
								   "Darkest secret"};
	std::cout << "Please enter informations about the contact :" << std::endl;
	while (index < 11)
	{
		std::string test;
		std::cout << " " << data_needed[index] << " : ";
		std::getline(std::cin, data[index]);
		index++;
	}
}

std::string Contact::format(std::string str)
{
	std::string formatted;

	if (str.size() < 10)
	{
		for (int index = str.size(); index < 10; index++)
		{
			formatted += " ";
		}
		formatted += str;
	}
	else
	{
		formatted = str.substr(0, 9) + ".";
	}
	return (formatted);
}

void Contact::display_infos(int index)
{
	std::cout << "| " << format(std::to_string(index)) << " | " << format(data[0]) << " | " << format(data[1]) << " | "
			  << format(data[2]) << " |" << std::endl;
}

void Contact::describe(void)
{
	std::string data_needed[11] = {"First name", "Last name", "Nickname", "Login", "Postal code",
								   "Email address", "Phone number", "Birthday", "Favorite meal", "Underwear color",
								   "Darkest secret"};
	for (int index = 0; index < 11; index++)
	{
		std::cout << data_needed[index] << " : " << (data[index].size() < 1 ? "* No information *" : data[index])
				  << std::endl;
	}
}