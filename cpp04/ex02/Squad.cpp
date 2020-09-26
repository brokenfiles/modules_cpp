/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 11:00:28 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 11:00:28 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include "Squad.hpp"

Squad::Squad()
{
	this->units = NULL;
	this->count = 0;
}

Squad::Squad(const Squad &squad)
{
	int n = squad.getCount();
	if (squad.units)
	{
		for (int i = 0; i < n; ++i)
		{
			this->units = new ISpaceMarine *[n];
			for (int j = 0; j < n; ++j)
			{
				this->units[j] = squad.getUnit(j)->clone();
			}
		}
	}
	else
	{
		this->units = NULL;
	}
	this->count = n;
}

Squad::~Squad()
{
	this->clear();
}

int Squad::getCount() const
{
	return this->count;
}

Squad &Squad::operator=(const Squad &other)
{
	if (this->units) {
		this->clear();
		for (int i = 0; i < other.getCount(); ++i)
		{
			this->push(other.getUnit(i)->clone());
		}
	}
	return (*this);
}

ISpaceMarine *Squad::getUnit(int i) const
{
	if (i >= 0 && i <= getCount())
	{
		return this->units[i];
	}
	return (NULL);
}

int Squad::push(ISpaceMarine *marine)
{
	if (marine)
	{
		ISpaceMarine **new_unit;
		for (int i = 0; i < getCount(); ++i)
		{
			if (getUnit(i) == marine)
			{
				return (getCount());
			}
		}
		new_unit = new ISpaceMarine *[getCount() + 1];
		for (int j = 0; j < getCount(); ++j)
		{
			new_unit[j] = getUnit(j);
		}
		new_unit[getCount()] = marine;
		delete[] this->units;
		this->units = new_unit;
		this->count++;
	}
	return (getCount());
}

void Squad::clear()
{
	for (int i = 0; i < getCount(); ++i)
	{
		delete getUnit(i);
	}
	delete this->units;
	this->units = NULL;
	this->count = 0;
}
