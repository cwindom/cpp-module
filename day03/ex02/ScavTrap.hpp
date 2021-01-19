//
// Created by Мария Корогодова on 20.01.2021.
//

#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP

#include <iostream>

class ScavTrap
{
private:
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
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &copy);
	~ScavTrap();
	ScavTrap &operator= (const ScavTrap &op);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer();
};


#endif //EX01_SCAVTRAP_HPP
