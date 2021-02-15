//
// Created by Мария Корогодова on 28.01.2021.
//

#include "AMateria.hpp"

AMateria::AMateria()
{
	//never used
}

AMateria::AMateria(const std::string &type): _type(type), _xp(0)
{
}

AMateria::AMateria(const AMateria &copy): _type(copy._type), _xp(0)
{
}

AMateria &AMateria::operator=(const AMateria &op)
{
	if (this == &op)
 		return *this;
	this->_type = op._type;
	this->_xp = op._xp;
	return *this;
}

AMateria::~AMateria()
{
}

std::string const &AMateria::getType() const
{
	return this->_type;
}

unsigned int AMateria::getXP() const
{
	return this->_xp;
}

void AMateria::use(ICharacter &target)
{
	this->_xp += 10;
	target.getName();
	//std::cout << "Debug: " << "this is use from AMateria.cpp" << std::endl;
}
