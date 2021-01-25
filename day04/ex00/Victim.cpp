//
// Created by Мария Корогодова on 23.01.2021.
//

#include "Victim.hpp"

Victim::Victim(const std::string name) : _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

void Victim::introduce() const
{
	std::cout << "I'm " << this->_name << " and I like otters!" << std::endl;
}

std::string Victim::get_name() const
{
	return (this->_name);
}

void Victim::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

Victim::Victim(const Victim &copy): _name(copy._name)
{
}

Victim &Victim::operator=(const Victim &op)
{
	if (this == &op)
		return *this;
	this->_name = op._name;
	return *this;
}

std::ostream &operator<<(std::ostream &os, Victim const &rhs)
{
	os << "I'm " << rhs.get_name() << " and I like otters!" << std::endl;
	//os << rhs.introduce();
	return os;
}