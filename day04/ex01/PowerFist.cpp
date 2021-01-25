//
// Created by Мария Корогодова on 25.01.2021.
//

#include "PowerFist.hpp"
#include "AWeapon.hpp"

PowerFist::PowerFist(): AWeapon("Power First", 8, 50)
{

}

PowerFist::~PowerFist()
{

}

PowerFist::PowerFist(const PowerFist &copy): AWeapon(copy)
{

}

PowerFist &PowerFist::operator=(const PowerFist &copy)
{
	if (this == &copy)
		return *this;
	this->_name = copy._name;
	this->_APCost = copy._APCost;
	this->_damage = copy._damage;
	return *this;
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
