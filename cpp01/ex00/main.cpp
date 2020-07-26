/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 10:59:41 by louis             #+#    #+#             */
/*   Updated: 2020/07/24 10:59:41 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheStack()
{
	Pony pony("Garnier", "Brown", 4);

	pony.eat("apple");
	pony.run();
	pony.eat("pineapple");
	pony.setSpeed(3.4);
	pony.run();
}

void ponyOnTheHeap()
{
	Pony *pony = new Pony("L'Oréal", "Black", 12);

	pony->eat("carrot");
	pony->run();
	pony->eat("bottle of speed");
	pony->setSpeed(45.5);
	pony->run();

	delete pony;
}

int main(void)
{
	ponyOnTheStack();
	std::cout << std::endl;
	ponyOnTheHeap();
	return (0);
}