/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 09:52:55 by louis             #+#    #+#             */
/*   Updated: 2020/08/15 09:52:55 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Array.hpp"

template<typename T>
void displayArray(Array<T> array, size_t len) {
	for (size_t i = 0; i < len; ++i)
	{
		std::cout << array[i] << std::endl;
	}
}

void fct(void) {
	std::cout << "- Displaying lst strings -" << std::endl;
	Array<const char *> lst_strings(3);
	for (int i = 0; i < lst_strings.size(); ++i)
	{
		lst_strings[i] = "Bonjour";
	}
	displayArray(lst_strings, lst_strings.size());

	std::cout << "- Displaying lst ints -" << std::endl;
	Array<int> lst_ints(4);
	for (int j = 0; j < lst_ints.size(); ++j)
	{
		lst_ints[j] = j * j;
	}
	displayArray(lst_ints, lst_ints.size());

	std::cout << "- Displaying lst ints 2 -" << std::endl;
	Array<int> lst_ints2(lst_ints);
	lst_ints2[0] = 1337;
	displayArray(lst_ints2, lst_ints2.size());

	std::cout << "- Displaying lst ints -" << std::endl;
	displayArray(lst_ints, lst_ints.size());

	std::cout << "- Displaying lst doubles -" << std::endl;
	Array<double> lst_doubles;
	displayArray(lst_doubles, lst_doubles.size());

	std::cout << "\n- Displaying an error -" << std::endl;
	try {
		std::cout << lst_ints[lst_ints.size()] << std::endl; // it will throw an error
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

int main(void) {
	fct();
}