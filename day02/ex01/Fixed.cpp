//
// Created by Мария Корогодова on 18.01.2021.
//

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	//_value = copy.getRawBits(); //other implementation
}

Fixed::Fixed(const int num) : _value(num << this->_fractional)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num) : _value((int)roundf(num * (1 << this->_fractional)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}
Fixed &Fixed::operator=(const Fixed &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = copy.getRawBits();
	return *this;
}
int Fixed::getRawBits() const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}
void Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

int Fixed::toInt(void) const
{
	return (this->_value >> this->_fractional);
}

float Fixed::toFloat(void) const
{
	return (float(this->_value) / (1 << this->_fractional));
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}