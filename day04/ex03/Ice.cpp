//
// Created by Мария Корогодова on 28.01.2021.
//

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	this->_xp = 0;
}

Ice::~Ice()
{
}

Ice::Ice(const Ice &copy): AMateria(copy)
{
	this->_xp = copy._xp;
}

Ice &Ice::operator=(const Ice &copy)
{
	if (this == &copy)
		return *this;
	this->_xp = copy._xp;
	return *this;
}

AMateria *Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
