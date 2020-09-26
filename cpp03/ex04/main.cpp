/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 14:49:39 by louis             #+#    #+#             */
/*   Updated: 2020/08/01 14:49:39 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

int main(void) {
	SuperTrap superTrap("Bidule");
	std::cout << "SuperTrap's name : " << superTrap.getName() << std::endl;
	superTrap.meleeAttack("Target 1");
	superTrap.rangedAttack("Target 2");
	superTrap.vaulthunter_dot_exe("Target 3");
}