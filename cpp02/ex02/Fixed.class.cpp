#include "Fixed.class.hpp"

Fixed::Fixed()
{
	this->fixed_point = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
	this->fixed_point = i << this->bits;
}

Fixed::Fixed(const float f)
{
	this->fixed_point = roundf(f * 256);
}

int Fixed::toInt() const
{
	return fixed_point >> bits;
}

float Fixed::toFloat() const
{
	return ((float) fixed_point / 256);
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &fixed)
	{
		this->fixed_point = fixed.getRawBits();
	}
	return (*this);
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_point = raw;
}

bool Fixed::operator>(const Fixed &fixed) const
{
	return (Fixed::getRawBits() > fixed.getRawBits());
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return (Fixed::getRawBits() < fixed.getRawBits());
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return (Fixed::getRawBits() == fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return (Fixed::getRawBits() <= fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	return (Fixed::getRawBits() >= fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return (Fixed::getRawBits() != fixed.getRawBits());
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
	return (Fixed(toFloat() + fixed.toFloat()));
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
	return (Fixed(toFloat() - fixed.toFloat()));
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
	return (Fixed(toFloat() / fixed.toFloat()));
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
	return (Fixed(toFloat() * fixed.toFloat()));
}

Fixed &Fixed::operator++()
{
	this->fixed_point += (1 << this->bits);
	return (*this);
}

Fixed Fixed::operator++(int i)
{
	this->fixed_point += i;
	return (*this);
}

Fixed &Fixed::operator--()
{
	this->fixed_point -= (1 << this->bits);
	return (*this);
}

Fixed Fixed::operator--(int i)
{
	(void) i;
	Fixed fixed = (*this);
	fixed_point -= (1 << this->bits);
	return (fixed);
}

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	return (fixed1.getRawBits() < fixed2.getRawBits() ? fixed1 : fixed2);
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	return (fixed1.getRawBits() > fixed2.getRawBits() ? fixed1 : fixed2);
}

const Fixed &Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	return (fixed1.getRawBits() < fixed2.getRawBits() ? fixed1 : fixed2);
}

const Fixed &Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	return (fixed1.getRawBits() > fixed2.getRawBits() ? fixed1 : fixed2);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}