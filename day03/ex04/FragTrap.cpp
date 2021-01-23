//
// Created by Мария Корогодова on 19.01.2021.
//

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_name = "default";
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << "FragTrap " << "I'm over here! (created)" << std::endl;
}

FragTrap::FragTrap(std::string const name): ClapTrap(name)
{
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << "FragTrap constructor is called, name is " << this->_name  << std::endl;
}

void FragTrap::set_hitPoints()
{
	this->_hitPoints = 100;
}

void FragTrap::set_maxHitPoints()
{
	this->_maxHitPoints = 100;
}

void FragTrap::set_armorDamageReduction()
{
	this->_armorDamageReduction = 5;
}

void FragTrap::set_rangedAttackDamage()
{
	this->_rangedAttackDamage = 20;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor is called, name is " << this->_name << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy._name)
{
	*this = copy;
	std::cout << "FragTrap " << this->_name << " \"I am copy\"" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &op)
{
	ClapTrap::operator=(op);
	return *this;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target)
{
	std::cout << "----------FragTrap vaulthunter.exe called----------" << std::endl;
	if (this->_energyPoints < 25)
	{
		std::cout << "\"Oh no:( I have no energy for this attack\"" << std::endl;
		return;
	}
	this->_hitPoints = this->_maxHitPoints;
	std::string attack[5] = {"Rubber Ducky", "Pirate Ship Mode", "Gun Wizard", "Miniontrap", "Meat Unicycle"};
	//srand(time(NULL));
	int num = rand() % 5;
	std::cout << "Heeeey this is " << attack[num] << " deadly attack!!to " << target << " \"Wow! You're not dead?\""<< std::endl;
	std::cout << "\"Wow! You're not dead?\"" << std::endl;
	std::cout << "energy points before vaulthunter.exe: " << this->_energyPoints << std::endl;
	this->_energyPoints -= 25;
	std::cout << "energy points after vaulthunter.exe: " << this->_energyPoints << std::endl;
}