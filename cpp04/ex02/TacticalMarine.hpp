/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 11:00:38 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 11:00:38 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_CPP_TACTICALMARINE_HPP
#define MODULE_CPP_TACTICALMARINE_HPP


#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine();

	TacticalMarine(const TacticalMarine &marine);

	TacticalMarine &operator=(const TacticalMarine &marine);

	~TacticalMarine();

	ISpaceMarine *clone() const;

	void battleCry() const;

	void rangedAttack() const;

	void meleeAttack() const;
};


#endif //MODULE_CPP_TACTICALMARINE_HPP
