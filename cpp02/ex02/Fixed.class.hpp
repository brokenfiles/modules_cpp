/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <llaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 17:17:24 by llaurent          #+#    #+#             */
/*   Updated: 2020/07/27 17:17:24 by llaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS__HPP
# define FIXED_CLASS__HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int fixed_point;
	static const int bits = 8;
public:
	Fixed();

	Fixed(const Fixed &fixed);

	Fixed(const float f);

	Fixed(const int i);

	~Fixed();

	Fixed &operator=(const Fixed &fixed);

	int getRawBits(void) const;

	void setRawBits(int const raw);

	float toFloat(void) const;

	int toInt(void) const;

	bool operator>(const Fixed &fixed) const;

	bool operator<(const Fixed &fixed) const;

	bool operator==(const Fixed &fixed) const;

	bool operator<=(const Fixed &fixed) const;

	bool operator>=(const Fixed &fixed) const;

	bool operator!=(const Fixed &fixed) const;

	Fixed operator+(const Fixed &fixed) const;

	Fixed operator-(const Fixed &fixed) const;

	Fixed operator/(const Fixed &fixed) const;

	Fixed operator*(const Fixed &fixed) const;

	Fixed operator++();

	Fixed operator++(int);

	Fixed operator--();

	Fixed operator--(int);

	static Fixed &min(Fixed &a, Fixed &b);

	static Fixed &max(Fixed &a, Fixed &b);

	static const Fixed &max(const Fixed &a, const Fixed &b);

	static const Fixed &min(const Fixed &a, const Fixed &b);

};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);


#endif