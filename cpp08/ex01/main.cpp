/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 12:39:33 by louis             #+#    #+#             */
/*   Updated: 2020/08/17 12:39:33 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <stdlib.h>

size_t random_number(size_t min, size_t max)
{
	return (rand() % (max - min + 1) + min);
}

void display_numbers(Span & sp) {
	for (size_t i = 0; i < sp.getSize(); ++i)
	{
		std::cout << sp.getStorage()[i] << (i != sp.getSize() - 1 ? ", " : "");
	}
	std::cout << std::endl;
}

int main(void) {
	srand(time(NULL));
	Span sp = Span(random_number(5, 30));
	std::cout << "Number of ints : " << sp.getSize() << std::endl;
	for (size_t i = 0; i < sp.getSize(); ++i)
	{
		size_t nb = random_number(-100, 100);
		sp.addNumber(static_cast<int>(nb));
	}
	display_numbers(sp);
	try {
		size_t shortest = sp.shortestSpan();
		std::cout << "shortest : " << shortest << std::endl;
		size_t longest = sp.longestSpan();
		std::cout << "longest  : " << longest << std::endl;
	} catch (std::exception & e) {
		std::cout << "Error : " << e.what() << std::endl;
	}
}
