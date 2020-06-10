/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/10 16:17:47 by louis             #+#    #+#             */
/*   Updated: 2020/06/10 16:17:47 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

void	command_add(Contact contacts[8], int *contact_number) {
	if (*contact_number >= 8) {
		std::cout << "You reach the limit of contacts" << std::endl;
	} else {
		contacts[(*contact_number)++].read_infos();
	}
}

void command_search(Contact contacts[8], int *contact_number) {
	int	contact_index = 0;

	std::cout << "-----------------------------------------------------\n"
			  << "| #          | First name | Last name  | Nickname   |\n" <<
			  "|                                                   |" << std::endl;
	for (int index = 0; index < *contact_number; index ++) {
		contacts[index].display_infos(index);
	}
	std::cout << "-----------------------------------------------------\n" << std::endl;
	std::cout << "Please enter an index : ";
	std::cin >> contact_index;
	while (!std::cin.good()) {
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
		std::cout << "Please enter an index : ";
		std::cin >> contact_index;
	}
	if (contact_index >= *contact_number || contact_index < 0) {
		std::cout << "This contact does not exist" << std::endl;
	} else {
		contacts[contact_index].describe();
	}
}