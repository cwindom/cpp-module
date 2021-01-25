//
// Created by Мария Корогодова on 25.01.2021.
//

#ifndef EX01_RADSCORPION_HPP
#define EX01_RADSCORPION_HPP

#include <iostream>
#include "Enemy.hpp"

class RadScorpion: public Enemy
{
public:
	RadScorpion();
	virtual ~RadScorpion();
	RadScorpion(RadScorpion const &copy);
	RadScorpion &operator= (RadScorpion const &copy);
	void takeDamage(int dmg);
};


#endif //EX01_RADSCORPION_HPP
