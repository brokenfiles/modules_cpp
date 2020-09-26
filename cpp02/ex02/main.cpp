/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <llaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 17:17:28 by llaurent          #+#    #+#             */
/*   Updated: 2020/07/27 17:17:28 by llaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

int	main(void) {
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	return 0;
//	return 0;
//	Fixed a;
//	Fixed b(10);
//	Fixed c(42.42f);
//	Fixed const d(b);
//	a = Fixed(1234.4321f);
//	Fixed maxfixed = Fixed::max(Fixed(4), Fixed(4.5f));
//	std::cout << "a is " << a << std::endl;
//	std::cout << "max is " << maxfixed << std::endl;
//	std::cout << "b is " << b << std::endl;
//	std::cout << "c is " << c << std::endl;
//	std::cout << "d is " << d << std::endl;
//	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
//	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
//	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
//	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
//	return 0;
}