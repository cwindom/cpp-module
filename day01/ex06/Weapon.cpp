#include "Weapon.hpp"

Weapon::Weapon(std::string const &type)
{
	this->_type = type;
}
Weapon::~Weapon()
{
	return;
}

std::string const &Weapon::getType()
{
	return(this->_type);
}

void Weapon::setType(std::string const &type)
{
	this->_type = type;
}