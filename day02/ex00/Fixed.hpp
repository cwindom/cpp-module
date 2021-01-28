//
// Created by Мария Корогодова on 17.01.2021.
//

#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int _value;
	static const int _fractional = 8;
public:
	Fixed();
	Fixed(Fixed const &copy);
	Fixed &operator= (Fixed const &copy);
	virtual ~Fixed();

	void setRawBits(int const raw);
	int getRawBits(void) const;

};


#endif //EX00_FIXED_HPP
