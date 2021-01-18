//
// Created by Мария Корогодова on 17.01.2021.
//

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	//_value = copy.getRawBits(); //other implementation
	*this = copy;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}
Fixed &Fixed::operator=(Fixed const &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = copy.getRawBits();
	return *this;
}
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}
void Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}