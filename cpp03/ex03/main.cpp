/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 14:49:01 by louis             #+#    #+#             */
/*   Updated: 2020/08/01 14:49:01 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void) {
	FragTrap fragTrap("Pierre");
	fragTrap.vaulthunter_dot_exe("Paul");
	FragTrap fragTrap1 = fragTrap;
	fragTrap1.vaulthunter_dot_exe("Jacques");
	ScavTrap scavTrap("John");
	scavTrap.challengeNewcomer(fragTrap.getName());
	NinjaTrap ninjaTrap("Jacky");
	ninjaTrap.ninjaShoebox(scavTrap);
	NinjaTrap ninjaTrap1(ninjaTrap);
	std::cout << "My name is " << ninjaTrap1.getName() << std::endl;
}