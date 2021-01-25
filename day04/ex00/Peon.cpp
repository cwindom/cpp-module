//
// Created by Мария Корогодова on 23.01.2021.
//

#include "Peon.hpp"
#include "Victim.hpp"

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(const std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon &Peon::operator=(const Peon &op)
{
	Victim::operator=(op);
	return *this;
}

Peon::Peon(const Peon &copy):Victim(copy._name)
{
	*this = copy;
}

std::string Peon::get_name() const
{
	return Victim::get_name();
}

void Peon::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}
