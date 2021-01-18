//
// Created by Мария Корогодова on 18.01.2021.
//

#ifndef EX01_FIXED_HPP
#define EX01_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int _value;
	static const int _fractional = 8;

public:
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed &copy);
	~Fixed();

	Fixed &operator= (const Fixed &copy);
	void setRawBits(int const raw);
	int getRawBits(void) const;
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif //EX01_FIXED_HPP
