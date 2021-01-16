#ifndef EX06_HUMANB_HPP
#define EX06_HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon *_weapon;
public:
	HumanB(std::string const &name);
	~HumanB();
	void attack();
	void setWeapon(Weapon &weapon);
};


#endif
