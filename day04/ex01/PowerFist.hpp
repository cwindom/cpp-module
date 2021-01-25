//
// Created by Мария Корогодова on 25.01.2021.
//

#ifndef EX01_POWERFIST_HPP
#define EX01_POWERFIST_HPP

#include <iostream>
#include "AWeapon.hpp"

class PowerFist: public AWeapon
{
public:
	PowerFist();
	virtual ~PowerFist();
	PowerFist(PowerFist const &copy);
	PowerFist &operator= (PowerFist const &copy);
	void attack() const;
};


#endif //EX01_POWERFIST_HPP
