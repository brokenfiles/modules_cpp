/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 11:01:07 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 11:01:07 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_CPP_ICE_HPP
#define MODULE_CPP_ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice &other);
	Ice &operator=(const Ice &other);
	~Ice();
	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif //MODULE_CPP_ICE_HPP
