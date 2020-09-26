/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 11:00:11 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 11:00:11 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_CPP_ASSAULTTERMINATOR_HPP
#define MODULE_CPP_ASSAULTTERMINATOR_HPP


#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator();

	AssaultTerminator(const AssaultTerminator &assaultTerminator);

	AssaultTerminator &operator=(const AssaultTerminator &other);

	~AssaultTerminator();

	ISpaceMarine *clone() const;

	void battleCry() const;

	void rangedAttack() const;

	void meleeAttack() const;
};


#endif //MODULE_CPP_ASSAULTTERMINATOR_HPP
