/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 14:48:28 by louis             #+#    #+#             */
/*   Updated: 2020/08/01 14:48:28 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	FragTrap fragTrap("Pierre");
	fragTrap.vaulthunter_dot_exe("Paul");
	FragTrap fragTrap1 = fragTrap;
	fragTrap1.vaulthunter_dot_exe("Jacques");
	ScavTrap scavTrap("John");
	scavTrap.challengeNewcomer(fragTrap.getName());
}