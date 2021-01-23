//
// Created by Мария Корогодова on 20.01.2021.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	srand(time(NULL));
	this->_name = "default";
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 50;
	this->_rangedAttackDamage = 50;
	this->_armorDamageReduction = 10;
	std::cout << "---------- ClapTrap default constructor called----------" << std::endl;
	std::cout << "#ClapTrap# (created)" << std::endl << std::endl;;
}

ClapTrap::ClapTrap(std::string const name): _name(name)
{
	srand(time(NULL));
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 50;
	this->_rangedAttackDamage = 50;
	this->_armorDamageReduction = 10;
	std::cout << "---------- ClapTrap constructor called----------" << std::endl;
	std::cout << "#ClapTrap# \"My name is " << this->_name << "\" (created)" << std::endl << std::endl;;
}

ClapTrap::ClapTrap(const ClapTrap &copy): _name(copy._name)
{
	srand(time(NULL));
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_maxHitPoints = copy._maxHitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_maxEnergyPoints = copy._maxEnergyPoints;
	this->_level = copy._level;
	this->_meleeAttackDamage = copy._meleeAttackDamage;
	this->_rangedAttackDamage = copy._rangedAttackDamage;
	this->_armorDamageReduction = copy._armorDamageReduction;
	std::cout << "---------- ClapTrap copy constructor called----------" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "---------- ClapTrap destructor called----------" << std::endl;
	std::cout << this->_name << " #ClapTrap# (killed)" << std::endl;

}

ClapTrap & ClapTrap::operator=(const ClapTrap &op)
{
	this->_name = op._name;
	this->_hitPoints = op._hitPoints;
	this->_maxHitPoints = op._maxHitPoints;
	this->_energyPoints = op._energyPoints;
	this->_maxEnergyPoints = op._maxEnergyPoints;
	this->_level = op._level;
	this->_meleeAttackDamage = op._meleeAttackDamage;
	this->_rangedAttackDamage = op._rangedAttackDamage;
	this->_armorDamageReduction = op._armorDamageReduction;
	std::cout << "---------- ClapTrap operator= called----------" << std::endl;
	return *this;
}

void ClapTrap::rangedAttack(const std::string &target)
{
	std::cout << "#ClapTrap# " << this->_name << " attacks " << target << " at range, causing " <<
			  this->_rangedAttackDamage << " points of damage!" << std::endl << std::endl;
}

void ClapTrap::meleeAttack(const std::string &target)
{
	std::cout << "#ClapTrap# " << this->_name << " attacks " << target << " at range, causing " <<
			  this->_meleeAttackDamage << " points of damage!" << std::endl << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	int hit = this->_hitPoints - amount + this->_armorDamageReduction;
	if (hit > this->_hitPoints)
	{
		std::cout << "amount is incorrect. The function does not work" << std::endl << std::endl;
		return;
	}
	if (hit < 0) hit = 0;
	if (hit > this->_maxHitPoints) hit = this->_maxHitPoints;
	std::cout << "#ClapTrap# " << this->_name <<  " \"Ahhhh, I'm leaking!\" (damaged)" << std::endl;
	std::cout << "hit points before damage: " << this->_hitPoints << std::endl;
	this->_hitPoints = hit;
	std::cout << "hit points after damage: " << this->_hitPoints << std::endl << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	int hit = this->_hitPoints + amount;
	if (hit < this->_hitPoints)
	{
		std::cout << "amount is incorrect. The function does not work" << std::endl << std::endl;
		return;
	}
	if (hit > this->_maxHitPoints) hit = this->_maxHitPoints;
	if (hit < 0)
		hit = 0;
	std::cout << "#ClapTrap# "  << this->_name << " :3 (after repair)" << std::endl;
	std::cout << "hit points before repair: " << this->_hitPoints << std::endl;
	this->_hitPoints = hit;
	std::cout << "hit points after repair: " << this->_hitPoints << std::endl << std::endl;
}