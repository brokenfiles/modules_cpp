/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 09:46:22 by louis             #+#    #+#             */
/*   Updated: 2020/08/15 09:46:22 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void iter(T * array, int length, void (*f)(T)) {
	if (array == NULL) {
		return ;
	}
	for (int i = 0; i < length; ++i)
	{
		f(array[i]);
	}
}

template <typename T>
void print(T type) {
	std::cout << type << std::endl;
}

template <typename T>
void print_with_prefix(T type) {
	std::cout << "Prefix : " << type << std::endl;
}

int main(void) {
	int numbers[] = {22, 10, 2001, 17, 02, 2001};
	std::string strings[] = {"hi", "como", "esta"};
	iter(numbers, 6, print);
	iter(strings, 3, print_with_prefix);
}