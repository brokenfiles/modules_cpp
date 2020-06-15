#ifndef FIXED_CLASS__HPP
# define FIXED_CLASS__HPP

# include <iostream>

class Fixed
{
private:
	int fixed_point;
	static const int bits = 8;
public:
	Fixed();

	Fixed(const Fixed &fixed);

	~Fixed();

	Fixed &operator=(const Fixed &fixed);

	int getRawBits(void) const;

	void setRawBits(int const raw);
};

#endif