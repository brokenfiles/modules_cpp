/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 11:00:32 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 11:00:32 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_CPP_SQUAD_HPP
#define MODULE_CPP_SQUAD_HPP


#include "ISquad.hpp"

class Squad : public ISquad
{
private:
	ISpaceMarine **units;
	int count;
public:
	Squad();

	Squad(const Squad &squad);

	virtual ~Squad();

	Squad &operator=(const Squad &other);

	int getCount() const;

	ISpaceMarine *getUnit(int i) const;

	int push(ISpaceMarine *marine);

	void clear();
};


#endif //MODULE_CPP_SQUAD_HPP
