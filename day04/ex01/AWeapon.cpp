//
// Created by Мария Корогодова on 25.01.2021.
//

#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name, int apCost, int damage): _name(name), _damage(damage), _APCost(apCost)
{

}

AWeapon::AWeapon(const AWeapon &copy): _name(copy._name), _damage(copy._damage), _APCost(copy._APCost)
{

}

AWeapon &AWeapon::operator= (const AWeapon &op)
{
	this->_name = op._name;
	this->_damage = op._damage;
	this->_APCost = op._APCost;
	return *this;
}

AWeapon::~AWeapon()
{
}

std::string AWeapon::getName() const
{
	return this->_name;
}

int AWeapon::getAPCost() const
{
	return this->_APCost;
}

int AWeapon::getDamage() const
{
	return this->_damage;
}
