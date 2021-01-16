#ifndef EX06_HUMANA_HPP
#define EX06_HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon &_weapon;
public:
	HumanA(std::string const &name, Weapon &weapon);
	~HumanA();
	void attack();
};


#endif
