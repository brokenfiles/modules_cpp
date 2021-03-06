/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 13:24:30 by louis             #+#    #+#             */
/*   Updated: 2020/08/07 13:24:30 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include "Convert.hpp"

void checkChar(double arg) {
	std::cout << "char : ";
	try {
		char c = Convert::toChar(arg);
		std::cout << '\'' << c << '\'';
	} catch (std::exception &e) {
		std::cout << e.what();
	}
	std::cout << std::endl;
}

void checkInt(double arg) {
	std::cout << "int : ";
	try {
		std::cout << Convert::toInt(arg);
	} catch (std::exception &e) {
		std::cout << e.what();
	}
	std::cout << std::endl;
}

void checkDouble(double arg, int precision) {
	std::cout << "double : ";
	try {
		std::cout << std::setprecision(precision) << std::fixed << Convert::toDouble(arg);
	} catch (std::exception &e) {
		std::cout << e.what();
	}
	std::cout << std::endl;
}

void checkFloat(double arg, int precision) {
	std::cout << "float : ";
	try {
		std::cout << std::setprecision(precision) << std::fixed << Convert::toFloat(arg) << 'f';
	} catch (std::exception &e) {
		std::cout << e.what();
	}
	std::cout << std::endl;
}

int main(int ac, char ** av) {
	if (ac != 2) {
		std::cerr << "Usage : ./program <int/char/float/double>" << std::endl;
		return (1);
	}
	int precision = Convert::getPrecision(av[1]);
	double arg = strtod(av[1], av);
	checkChar(arg);
	checkInt(arg);
	checkFloat(arg, precision);
	checkDouble(arg, precision >= 2 ? 2 : precision);
	return (0);
}
