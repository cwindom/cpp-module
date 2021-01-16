#include "HumanB.hpp"

HumanB::HumanB(std::string const &name)
{
	this->_name = name;
}

HumanB::~HumanB()
{
	return;
}

void HumanB::attack()
{
	std::cout << this->_name << " attacks with his " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}