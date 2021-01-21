//
// Created by Мария Корогодова on 21.01.2021.
//

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap(), FragTrap(), NinjaTrap()
{
	std::cout << " SUPERRR TRAP was created default" << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_maxHitPoints = FragTrap::_maxHitPoints;
	this->_energyPoints = NinjaTrap::_energyPoints;
	this->_maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
	this->_meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
	this->_rangedAttackDamage = FragTrap::_rangedAttackDamage;
	this->_armorDamageReduction = FragTrap::_armorDamageReduction;
}

SuperTrap::SuperTrap(std::string const &name): ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	std::cout << getName() << " SUPERRR TRAP was created" << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_maxHitPoints = FragTrap::_maxHitPoints;
	this->_energyPoints = NinjaTrap::_energyPoints;
	this->_maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
	this->_meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
	this->_rangedAttackDamage = FragTrap::_rangedAttackDamage;
	this->_armorDamageReduction = FragTrap::_armorDamageReduction;
}
SuperTrap::SuperTrap(const SuperTrap &copy): ClapTrap(copy)
{
	std::cout << getName() << " SUPERRR TRAP was copyed" << std::endl;
}
SuperTrap::~SuperTrap()
{
	std::cout << getName() << " SUPERRR TRAP was deleted" << std::endl;
}
SuperTrap & SuperTrap::operator=(const SuperTrap &op)
{
	if (this == &op)
		return *this;
	ClapTrap::operator=(op);
	return *this;
}

void SuperTrap::meleeAttack(const std::string &target)
{
	NinjaTrap::meleeAttack(target);
}

void SuperTrap::rangedAttack(const std::string &target)
{
	FragTrap::rangedAttack(target);
}