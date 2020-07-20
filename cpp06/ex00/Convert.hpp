//
// Created by Louis Laurent on 01/07/2020.
//

#ifndef MODULE_CPP_CONVERT_HPP
#define MODULE_CPP_CONVERT_HPP

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
