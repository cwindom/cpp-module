//
// Created by Мария Корогодова on 25.01.2021.
//

#ifndef EX01_PLASMARIFLE_HPP
#define EX01_PLASMARIFLE_HPP

#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
public:
	PlasmaRifle();
	virtual ~PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &copy);
	PlasmaRifle &operator= (PlasmaRifle const &copy);
	void attack() const;
};


#endif //EX01_PLASMARIFLE_HPP
