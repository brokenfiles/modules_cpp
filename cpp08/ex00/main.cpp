/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 12:39:41 by louis             #+#    #+#             */
/*   Updated: 2020/08/17 12:39:41 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <set>
#include <stack>
#include "easyfind.hpp"

int main(void) {
	{
		std::cout << "Trying with lists : " << std::endl;
		std::list<int> list;
		list.push_back(3);
		list.push_back(4);
		list.push_back(5);
		try {
			int val = easyfind(list, 5);
			std::cout << "value found : " << val << std::endl;
		} catch (std::exception &e) {
			std::cout << "error : " << e.what() << std::endl;
		}
	}

	{
		std::cout << "\nTrying with vectors : " << std::endl;
		std::vector<int> vec1;
		vec1.push_back(1);
		vec1.push_back(2);
		try {
			int val = easyfind(vec1, 1);
			std::cout << "value found : " << val << std::endl;
		} catch (std::exception &e) {
			std::cout << "error : " << e.what() << std::endl;
		}
	}

	{
		std::cout << "\nTrying with sets : " << std::endl;
		std::set<int> set1;
		set1.insert(42);
		set1.insert(1337);
		set1.insert(20);
		try {
			int val = easyfind(set1, 20);
			std::cout << "value found : " << val << std::endl;
		} catch (std::exception & e) {
			std::cout << "error : " << e.what() << std::endl;
		}
	}

	{
		std::cout << "\nTrying with deques : " << std::endl;
		std::deque<int> deque1;
		deque1.push_back(12);
		deque1.push_back(43);
		deque1.push_front(17);
		try {
			int val = easyfind(deque1, 17);
			std::cout << "value found : " << val << std::endl;
		} catch (std::exception & e) {
			std::cout << "error : " << e.what() << std::endl;
		}
	}
	return 0;
}
