//
// Created by Мария Корогодова on 28.01.2021.
//

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(const Cure &copy): AMateria("cure")
{
	this->_xp = copy._xp;
}

Cure &Cure::operator=(const Cure &copy)
{
	if (this == &copy)
		return *this;
	this->_xp = copy._xp;
	return *this;
}

AMateria *Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}