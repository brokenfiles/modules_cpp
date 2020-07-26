/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 11:00:23 by louis             #+#    #+#             */
/*   Updated: 2020/07/24 11:00:23 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main(void)
{
	ZombieHorde *zombieHorde1 = new ZombieHorde(3, "whisper");
	zombieHorde1->announce();
	delete zombieHorde1;

	ZombieHorde zombieHorde(33, "nice");
	zombieHorde.announce();
	return (0);
}