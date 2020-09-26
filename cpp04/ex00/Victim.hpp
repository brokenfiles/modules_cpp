/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 10:55:51 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 10:55:51 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULES_CPP_VICTIM_HPP
#define MODULES_CPP_VICTIM_HPP

#include <iostream>

class Victim
{
private:
	std::string name;

public:
	const std::string &getName() const;

	void setName(const std::string &name);

public:
	Victim(const std::string &name);

	Victim(const Victim &victim);

	virtual ~Victim();

	Victim &operator=(const Victim &victim);

	virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &os, const Victim &victim);

#endif //MODULES_CPP_VICTIM_HPP
