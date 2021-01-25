//
// Created by Мария Корогодова on 23.01.2021.
//

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
}

Sorcerer::Sorcerer(const std::string name, const std::string title) : _name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << " is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title << " is dead! Consequences will never be the same!" << std::endl;
}

void Sorcerer::introduce()
{
	std::cout << "I am " << this->_name << ", " << this->_title << ", and I like ponies!" << std::endl;
}

std::string Sorcerer::get_name() const
{
	return (this->_name);
}

std::string Sorcerer::get_title() const
{
	return (this->_title);
}

void Sorcerer::polymorph(const Victim &v) const
{
	v.getPolymorphed();
}

Sorcerer::Sorcerer(const Sorcerer &copy): _name(copy._name), _title(copy._title)
{

}

Sorcerer &Sorcerer::operator=(const Sorcerer &op)
{
	if (this == &op)
		return *this;
	this->_name = op._name;
	this->_title = op._title;
	return *this;
}

std::ostream &operator<<(std::ostream &os, Sorcerer const &rhs)
{
	os << "I am " << rhs.get_name() << ", " << rhs.get_title() << ", and I like ponies!" << std::endl;
	return os;
}