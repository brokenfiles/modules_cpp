/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 11:00:06 by louis             #+#    #+#             */
/*   Updated: 2020/07/24 11:00:06 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string name, type;
public:
	~Zombie();

	Zombie(std::string name, std::string type);

	Zombie(const Zombie &other);

	Zombie &operator=(const Zombie &other);

	void advert(void);
};

#endif