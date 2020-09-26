/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 11:00:45 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 11:00:45 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_CPP_AMATERIA_HPP
#define MODULE_CPP_AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;
class AMateria
{
private:
	std::string _type;
	unsigned int _xp;
public:
	AMateria(std::string const &type);
	AMateria(const AMateria &materia);
	AMateria &operator=(const AMateria &other);
	virtual ~AMateria();
	std::string const &getType() const;
	unsigned int getXP() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif //MODULE_CPP_AMATERIA_HPP
