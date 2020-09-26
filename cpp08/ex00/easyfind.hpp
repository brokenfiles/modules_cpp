/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 12:39:36 by louis             #+#    #+#             */
/*   Updated: 2020/08/17 12:39:36 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include <deque>

class NotFoundException : public std::exception
{
	const char *what() const throw()
	{
		return "Integer can't be found in this range";
	}
};

template<typename T>
int easyfind(T container, int to_find)
{
	typename T::iterator begin = container.begin();
	typename T::iterator end   = container.end();
	while (begin != end) {
		if (*begin == to_find ) {
			return (to_find);
		}
		begin++;
	}
	throw NotFoundException();
}