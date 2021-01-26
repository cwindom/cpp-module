//
// Created by Мария Корогодова on 25.01.2021.
//

#ifndef EX01_AWEAPON_HPP
#define EX01_AWEAPON_HPP

#include <iostream>

class AWeapon
{
protected:
	std::string _name;
	int _damage;
	int _APCost;
	AWeapon();
public:
	AWeapon(std::string const & name, int apCost, int damage);
	AWeapon(AWeapon const &copy);
	AWeapon &operator= (AWeapon const &op);
	virtual ~AWeapon();
	std::string getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};


#endif //EX01_AWEAPON_HPP
