//
// Created by Мария Корогодова on 25.01.2021.
//

#include "SuperMutant.hpp"
#include "Enemy.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &copy): Enemy(copy)
{
}

SuperMutant &SuperMutant::operator=(const SuperMutant &copy)
{
	if (this != &copy)
	{
		this->_hitPoints = copy._hitPoints;
		this->_type = copy._type;
	}
	return *this;
}

void SuperMutant::takeDamage(int dmg)
{
	Enemy::takeDamage(dmg - 3);
}
