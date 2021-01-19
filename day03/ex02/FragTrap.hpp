//
// Created by Мария Корогодова on 19.01.2021.
//

#ifndef EX00_FRAGTRAP_HPP
#define EX00_FRAGTRAP_HPP

#include <iostream>

class FragTrap
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
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &copy);
	~FragTrap();
	FragTrap &operator= (const FragTrap &op);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);
};


#endif //EX00_FRAGTRAP_HPP
