//
// Created by Мария Корогодова on 25.01.2021.
//

#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"


PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::~PlasmaRifle()
{

}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy): AWeapon(copy)
{

}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &copy)
{
	if (this == &copy)
		return *this;
	this->_name = copy._name;
	this->_APCost = copy._APCost;
	this->_damage = copy._damage;
	return *this;
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
