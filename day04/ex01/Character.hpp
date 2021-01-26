//
// Created by Мария Корогодова on 25.01.2021.
//

#ifndef EX01_CHARACTER_HPP
#define EX01_CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string _name;
	int _AP;
	AWeapon *wp;
public:
	Character();
	Character(std::string const & name);
	virtual ~Character();
	Character(Character const &copy);
	Character &operator= (Character const &copy);

	void recoverAP();
	void equip(AWeapon *weapon);
	void attack(Enemy *enemy);
	std::string getName() const;
    AWeapon *getWp() const;
	int getAP() const;
};

std::ostream &operator<<(std::ostream &os, Character const &rhs);

#endif //EX01_CHARACTER_HPP
