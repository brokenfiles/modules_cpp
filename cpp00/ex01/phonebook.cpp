/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/10 16:17:41 by louis             #+#    #+#             */
/*   Updated: 2020/06/10 16:17:41 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

int	handle_command(std::string line, Contact contacts[8], int *contact_number) {
	std::string command = line.substr(0, line.find(" "));
	if (command == "ADD") {
		command_add(contacts, contact_number);
	} else if (command == "SEARCH") {
		command_search(contacts, contact_number);
	}
	return (0);
}

int	handle_stdin() {
	std::string	input;
	Contact		contacts[8];
	int			contact_number = 0;

	while (input != "EXIT") {
		std::cout << "$> ";
		std::getline(std::cin, input);
		if (input != "") {
			handle_command(input, contacts, &contact_number);
		}
	}
	return (0);
}

int	main(void) {
	handle_stdin();
	return (0);
}