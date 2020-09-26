/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 09:46:16 by louis             #+#    #+#             */
/*   Updated: 2020/08/15 09:46:16 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void swap(T &a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T min(T a, T b) {
	return (a < b ? a : b);
}

template <typename T>
T max(T a, T b) {
	return (a > b ? a : b);
}

int main(void) {
	int a = 5;
	int b = 6;
	int c = min(a, b);
	std::cout << "min : " << c << std::endl;
	int d = max(a, b);
	std::cout << "max : " << d << std::endl;
	std::cout << "-- before swap --" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	swap(a, b);
	std::cout << "-- after swap --" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	if (min(a, b) > max(a, b)) {
		std::cout << "There is a serious problem" << std::endl;
	} else {
		std::cout << "Ok. It's alright..." << std::endl;
	}

	std::string string1 = "bonjour les amis";
	std::string string2 = "bonjour les potos";
	std::cout << "-- before swap --" << std::endl;
	std::cout << "string1 = " << string1 << std::endl;
	std::cout << "string2 = " << string2 << std::endl;
	swap(string1, string2);
	std::cout << "-- after swap --" << std::endl;
	std::cout << "string1 = " << string1 << std::endl;
	std::cout << "string2 = " << string2 << std::endl;
}