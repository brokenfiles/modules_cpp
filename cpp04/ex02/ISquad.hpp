/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 11:00:18 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 11:00:18 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_CPP_ISQUAD_HPP
#define MODULE_CPP_ISQUAD_HPP


#include "ISpaceMarine.hpp"

class ISquad
{
public:
	virtual ~ISquad() {};
	virtual int getCount() const = 0;
	virtual ISpaceMarine* getUnit(int) const = 0;
	virtual int push(ISpaceMarine*) = 0;
};


#endif //MODULE_CPP_ISQUAD_HPP
