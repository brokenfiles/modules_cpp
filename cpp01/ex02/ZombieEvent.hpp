/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 11:00:16 by louis             #+#    #+#             */
/*   Updated: 2020/07/24 11:00:16 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <random>
# include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string type;

	std::string randomName(size_t len);

public:
	ZombieEvent();

	~ZombieEvent();

	ZombieEvent(const ZombieEvent &other);

	ZombieEvent &operator=(const ZombieEvent &other);

	Zombie *randomChump(void);

	Zombie *newZombie(std::string name);

	void setZombieType(std::string type);
};

#endif