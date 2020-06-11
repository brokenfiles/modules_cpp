/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/10 16:38:53 by louis             #+#    #+#             */
/*   Updated: 2020/06/10 16:38:53 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string	ft_toupper(std::string str) {
	for (size_t index = 0; index < str.size(); index++) {
		if ((char)str[index] >= 'a' && (char)str[index] <= 'z') {
			str[index] -= 32;
		}
	}
	return (str);
}

int			main(int ac, char **av) {
	if (ac > 1) {
		for (int index = 1; index < ac; index ++) {
			std::cout << ft_toupper(av[index]);
		}
	} else {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	std::cout << std::endl;
	return (0);
}