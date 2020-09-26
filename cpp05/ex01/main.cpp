/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 11:54:52 by louis             #+#    #+#             */
/*   Updated: 2020/08/05 11:54:52 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main() {
	Bureaucrat john("John", 50);
	Form revolution("Forbid unlimited access to internet", 49, 1);
	john.signForm(revolution);
	std::cout << revolution << std::endl;
	john.incrementGrade();
	john.signForm(revolution);
	std::cout << revolution << std::endl;
}