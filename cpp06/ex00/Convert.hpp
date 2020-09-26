/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 13:24:25 by louis             #+#    #+#             */
/*   Updated: 2020/08/07 13:24:25 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_CPP_CONVERT_HPP
#define MODULE_CPP_CONVERT_HPP

#include <limits.h>
#include <iostream>

class Convert
{
public:
	class ImpossibleException : public std::exception
	{
		const char *what() const throw();
	};

	class NonDisplayableException : public std::exception
	{
		const char *what() const throw();
	};

	Convert();

	Convert(const Convert &convert);

	Convert &operator=(const Convert &convert);

	virtual ~Convert();

	static char toChar(double d);

	static int toInt(double d);

	static double toDouble(double d);

	static float toFloat(double d);

	static int getPrecision(std::string s);
};


#endif //MODULE_CPP_CONVERT_HPP
