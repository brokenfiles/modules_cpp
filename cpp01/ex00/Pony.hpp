/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 10:59:25 by louis             #+#    #+#             */
/*   Updated: 2020/07/24 10:59:25 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony
{
public:
	Pony(std::string name, std::string color, float speed);

	Pony(const Pony & pony);

	~Pony();

	Pony &operator=(const Pony & pony);

	void run(void);

	void eat(std::string food);

	void setSpeed(float newSpeed);
private:
	std::string name, color;
	float speed;
};

#endif