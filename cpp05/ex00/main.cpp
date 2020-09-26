/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 02:14:38 by louis             #+#    #+#             */
/*   Updated: 2020/08/05 02:14:38 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "BureauCrat.hpp"

int main(void) {
	try {
		BureauCrat bruce("Bruce", 1);
		bruce.decrementGrade();
//		bruce.incrementGrade();
		std::cout << bruce << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}