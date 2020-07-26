/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 10:59:58 by louis             #+#    #+#             */
/*   Updated: 2020/07/24 10:59:58 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main(void)
{
	ZombieEvent zombieEvent;

	zombieEvent.setZombieType("aggressive");
	Zombie *heapZombie1 = zombieEvent.newZombie("Gringo");
	heapZombie1->advert();
	delete heapZombie1;

	zombieEvent.setZombieType("cute");

	Zombie *heapZombieRandom = zombieEvent.randomChump();
	delete heapZombieRandom;

	Zombie stackZombie = Zombie("ZombStack", "dumb");
	stackZombie.advert();

	return (0);
}