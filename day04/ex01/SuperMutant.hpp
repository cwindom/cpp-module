//
// Created by Мария Корогодова on 25.01.2021.
//

#ifndef EX01_SUPERMUTANT_HPP
#define EX01_SUPERMUTANT_HPP

#include <iostream>
#include "Enemy.hpp"

class SuperMutant: public Enemy
{
public:
	SuperMutant();
	virtual ~SuperMutant();
	SuperMutant(SuperMutant const &copy);
	SuperMutant &operator= (SuperMutant const &copy);

	void takeDamage(int dmg);
};


#endif //EX01_SUPERMUTANT_HPP
