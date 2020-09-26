/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 10:55:36 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 10:55:36 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULES_CPP_PEON_HPP
#define MODULES_CPP_PEON_HPP


#include "Victim.hpp"

class Peon : public Victim
{
public:
	Peon(const std::string &name);

	virtual ~Peon();

	Peon &operator=(const Peon &);

	Peon(const Peon &);

	void getPolymorphed() const;
};


#endif //MODULES_CPP_PEON_HPP
