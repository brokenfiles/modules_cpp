/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 11:01:39 by louis             #+#    #+#             */
/*   Updated: 2020/07/24 11:01:39 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileHandler.hpp"

int	main(int ac, char **av)
{
	if (ac < 4) {
		std::cout << "Please enter filename, and two strings" << std::endl;
		return (1);
	} else {
		if ((std::string)av[1] == "" || (std::string)av[2] == "" || (std::string)av[3] == "") {
			std::cout << "Parameters must be non-zero" << std::endl;
			return (1);
		}
		try {
			FileHandler fileHandler(av[1], (std::string)av[1] + ".replace");
			fileHandler.setContent(fileHandler.get_file_content());
			fileHandler.write_new_file(av[2], av[3]);
		} catch (const char *e) {
			std::cout << "An exception occurred : " << e << std::endl;
		}
	}
	return (0);
}