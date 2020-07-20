//
// Created by Louis Laurent on 01/07/2020.
//

#include <cmath>
#include "Convert.hpp"

Convert::Convert()
{}

Convert::Convert(const Convert &convert)
{
	(void)convert;
}

Convert &Convert::operator=(const Convert &convert)
{
	(void)convert;
	return (*this);
}

Convert::~Convert()
{}

char Convert::toChar(double d)
{
	if (std::isnan(d)) {
		throw ImpossibleException();
	}
	char c = static_cast<char>(d);
	if (!std::isprint(c)) {
		throw NonDisplayableException();
	}
	return c;
}

int Convert::toInt(double d)
{
	if (std::isnan(d) || std::isinf(d)) {
		throw ImpossibleException();
	}
	int i = static_cast<int>(d);
	if (i > INT_MAX || i < INT_MIN) {
		throw ImpossibleException();
	}
	return i;
}

double Convert::toDouble(double d)
{
	return d;
}

float Convert::toFloat(double d)
{
	return (static_cast<float>(d));
}

int Convert::getPrecision(std::string s)
{
	size_t i = s.find('.');
	if (i == std::string::npos) {
		return (1);
	} else {
		size_t pre = (s.substr(i + 1) + '\0').find_first_not_of("0123456789");
		return (pre == 0 ? 1 : pre);
	}
}

const char *Convert::ImpossibleException::what() const throw()
{
	return "Impossible";
}

const char *Convert::NonDisplayableException::what() const throw()
{
	return "Non displayable";
}
