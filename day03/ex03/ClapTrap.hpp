//
// Created by Мария Корогодова on 20.01.2021.
//

#ifndef EX02_CLAPTRAP_HPP
#define EX02_CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	int _hitPoints;
	int _maxHitPoints;
	int _energyPoints;
	int _maxEnergyPoints;
	int _level;
	std::string _name;
	int _meleeAttackDamage;
	int _rangedAttackDamage;
	int _armorDamageReduction;
public:
	ClapTrap();
	ClapTrap(std::string const name);
	ClapTrap(const ClapTrap &copy);
	~ClapTrap();
	ClapTrap &operator= (const ClapTrap &op);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};


#endif //EX02_CLAPTRAP_HPP
