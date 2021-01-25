//
// Created by Мария Корогодова on 25.01.2021.
//

#include "RadScorpion.hpp"
#include "Enemy.hpp"

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &copy): Enemy(copy)
{
}

RadScorpion &RadScorpion::operator=(const RadScorpion &copy)
{
	if (this == &copy)
		return *this;
	this->_hitPoints = copy._hitPoints;
	this->_type = copy._type;
	return *this;
}

void RadScorpion::takeDamage(int dmg)
{
	Enemy::takeDamage(dmg - 3);
}
