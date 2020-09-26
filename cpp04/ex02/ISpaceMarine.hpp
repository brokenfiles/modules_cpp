/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 11:00:15 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 11:00:15 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_CPP_ISPACEMARINE_HPP
#define MODULE_CPP_ISPACEMARINE_HPP


class ISpaceMarine
{
public:
	virtual ~ISpaceMarine() {};
	virtual ISpaceMarine* clone() const = 0;
	virtual void battleCry() const = 0;
	virtual void rangedAttack() const = 0;
	virtual void meleeAttack() const = 0;
};


#endif //MODULE_CPP_ISPACEMARINE_HPP
