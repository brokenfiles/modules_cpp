/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 11:00:38 by louis             #+#    #+#             */
/*   Updated: 2020/07/24 11:00:38 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <random>
# include "Zombie.hpp"

class ZombieHorde {
private:
	Zombie		*horde;
	size_t		zombies_number;
	std::string	randomName(size_t len);
public:
	~ZombieHorde();
	ZombieHorde(size_t n, std::string type);
	ZombieHorde(const ZombieHorde &zombieHorde);
	ZombieHorde &operator=(const ZombieHorde &horde);
	void		announce(void);
};

#endif