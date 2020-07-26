/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 11:00:30 by louis             #+#    #+#             */
/*   Updated: 2020/07/24 11:00:30 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
private:
	std::string	name, type;
public:
	~Zombie();
	Zombie();
	Zombie(const Zombie &);
	Zombie &operator=(const Zombie &);
	Zombie(std::string name, std::string type);
	void		advert(void);
	void		setName(std::string name);
	void		setType(std::string type);
};

#endif