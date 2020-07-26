/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 11:00:43 by louis             #+#    #+#             */
/*   Updated: 2020/07/24 11:00:43 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string *brain_pointer = new std::string("HI THIS IS BRAIN");
	std::string &brain_ref = *brain_pointer;

	std::cout << "Pointer : " << *brain_pointer << std::endl;
	std::cout << "Ref     : " << brain_ref << std::endl;
	return (0);
}