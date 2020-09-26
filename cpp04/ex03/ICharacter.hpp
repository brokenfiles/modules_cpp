/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 11:01:11 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 11:01:11 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_CPP_ICHARACTER_HPP
#define MODULE_CPP_ICHARACTER_HPP

#include <string>
#include "AMateria.hpp"

class AMateria;

class ICharacter
{
public:
	virtual ~ICharacter() {};
	virtual const std::string & getName() const = 0;
	virtual void equip(AMateria *m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter &target) = 0;
};


#endif //MODULE_CPP_ICHARACTER_HPP
