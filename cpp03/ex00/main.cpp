/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 14:47:45 by louis             #+#    #+#             */
/*   Updated: 2020/08/01 14:47:45 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
	FragTrap fragTrap("Jack");
	fragTrap.rangedAttack("L'ange");
	fragTrap.takeDamage(50);
	fragTrap.vaulthunter_dot_exe("Mike");
	fragTrap.beRepaired(40);
}