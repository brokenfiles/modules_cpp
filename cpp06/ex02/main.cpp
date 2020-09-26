/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 11:54:16 by louis             #+#    #+#             */
/*   Updated: 2020/08/14 11:54:16 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify_from_pointer(Base * p) {
	if (dynamic_cast<A *>(p)) {
		std::cout << "Pointer detector : Class A has been detected" << std::endl;
	}
	if (dynamic_cast<B *>(p)) {
		std::cout << "Pointer detector : Class B has been detected" << std::endl;
	}
	if (dynamic_cast<C *>(p)) {
		std::cout << "Pointer detector : Class C has been detected" << std::endl;
	}
}

void identify_from_reference(Base & p) {
	try {
		A a = dynamic_cast<A &>(p);
		std::cout << "Reference detector : Class A has been detected" << std::endl;
	} catch (std::exception &e) {} // badcast is better
	try {
		B b = dynamic_cast<B &>(p);
		std::cout << "Reference detector : Class B has been detected" << std::endl;
	} catch (std::exception &e) {}
	try {
		C c = dynamic_cast<C &>(p);
		std::cout << "Reference detector : Class C has been detected" << std::endl;
	} catch (std::exception &e) {}
}


int main() {
	A * a = new A();
	identify_from_pointer(a);
	identify_from_reference(*a);
	B * b = new B();
	identify_from_pointer(b);
	identify_from_reference(*b);
	C * c = new C();
	identify_from_pointer(c);
	identify_from_reference(*c);
	Base * base = new Base();
	identify_from_pointer(base);
	identify_from_reference(*base);
	delete a;
	delete b;
	delete c;
	delete base;
}
