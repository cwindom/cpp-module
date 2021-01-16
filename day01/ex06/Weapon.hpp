#ifndef EX06_WEAPON_HPP
#define EX06_WEAPON_HPP

#include <iostream>

class Weapon
{
private:
	std::string _type;
public:
	Weapon(std::string const &type);
	~Weapon();
	std::string const &getType();
	void setType(std::string const &type);
};

#endif
