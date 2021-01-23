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

SuperTrap::SuperTrap(std::string const &name): ClapTrap(name), NinjaTrap(name), FragTrap(name)
{
	std::cout << getName() << " SUPERRR TRAP was created with params: " << std::endl;
	//----------------------------------------------------------------
	this->NinjaTrap::set_energyPoints();
	this->NinjaTrap::set_maxEnergyPoints();
	this->NinjaTrap::set_meleeAttackDamage();
	this->FragTrap::set_hitPoints();
	this->FragTrap::set_maxHitPoints();
	this->FragTrap::set_rangedAttackDamage();
	this->FragTrap::set_armorDamageReduction();
	//----------------------------------------------------------------
	std::cout << "hitPoints: " << this->_hitPoints << std::endl;
	std::cout << "maxHitPoints: " << this->_maxHitPoints << std::endl;
	std::cout << "energyPoints: " << this->_energyPoints << std::endl;
	std::cout << "maxEnergyPoints: " << this->_maxEnergyPoints << std::endl;
	std::cout << "meleeAttackDamage: " << this->_meleeAttackDamage << std::endl;
	std::cout << "rangedAttackDamage: " << this->_rangedAttackDamage << std::endl;
	std::cout << "armorDamageReduction: " << this->_armorDamageReduction << std::endl;
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
	std::cout << "----------this is melee attack from ninja trap----------" << std::endl;
	NinjaTrap::meleeAttack(target);
}

void SuperTrap::rangedAttack(const std::string &target)
{
	std::cout << "----------this is ranged attack from frag trap----------" << std::endl;
	FragTrap::rangedAttack(target);
}