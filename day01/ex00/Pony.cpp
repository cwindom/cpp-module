#include "Pony.hpp"

Pony::Pony(std::string name, double height, std::string color)
{
	_name = name;
	_height = height;
	_color = color;
	std::cout << "Pony " << this->_name << " is born" << std::endl;
}

Pony::~Pony()
{
	std::cout << "Oh no! Pony " << this->_name << " died :(" << std::endl << std::endl;
}

void Pony::someStaffHeap()
{
	std::cout << "!!!!!This is beautiful pony on heap!!!!!" << std::endl;
}

void Pony::someStaffStack()
{
	std::cout << "!!!!!This is wonderful pony on stack!!!!!" << std::endl;
}

double Pony::get_height(void)
{
	return (this->_height);
}

std::string Pony::get_color()
{
	return (this->_color);
}