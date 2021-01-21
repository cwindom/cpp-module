//
// Created by Мария Корогодова on 20.01.2021.
//

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	this->_name = "default";
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	std::cout << "I'm over here! (created)" << std::endl << std::endl;;
}

NinjaTrap::NinjaTrap(std::string const name): ClapTrap(name)
{
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	std::cout << "\"I'm over here! My name is " << this->_name << "\" (created)" << std::endl << std::endl;;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << this->_name << " \"I can see... the code\" (killed)" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &copy): ClapTrap(copy._name)
{
	*this = copy;
	std::cout << this->_name << " \"I am copy\"" << std::endl;
}

NinjaTrap & NinjaTrap::operator=(const NinjaTrap &op)
{
	ClapTrap::operator=(op);
	return *this;
}

void NinjaTrap::print(ClapTrap *tr)
{
	std::cout << "Test output: " << tr->getName() << ". Go to sleep after this project meh" << std::endl << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &tr)
{
	std::cout << "-----ClapTrap!-----" << std::endl;
	print(&tr);
}

void NinjaTrap::ninjaShoebox(FragTrap &tr)
{
	std::cout << "-----FragTrap!-----" << std::endl;
	print(&tr);
}

void NinjaTrap::ninjaShoebox(ScavTrap &tr)
{
	std::cout << "-----ScavTrap!-----" << std::endl;
	print(&tr);
}

void NinjaTrap::ninjaShoebox(NinjaTrap &tr)
{
	std::cout << "-----NinjaTrap!-----" << std::endl;
	print(&tr);
}