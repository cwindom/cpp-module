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
	std::cout << "FragTrap" << std::endl;
	std::cout << "I'm over here! (created)" << std::endl << std::endl;;
}

FragTrap::FragTrap(std::string const name): ClapTrap(name)
{
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << "FragTrap" << std::endl;
	std::cout << "\"I'm over here! My name is " << this->_name << "\" (created)" << std::endl << std::endl;;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap" << std::endl;
	std::cout << this->_name << " \"I can see... the code\" (killed)" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy._name)
{
	*this = copy;
	std::cout << "FragTrap" << std::endl;
	std::cout << this->_name << " \"I am copy\"" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &op)
{
	ClapTrap::operator=(op);
	return *this;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target)
{
	if (this->_energyPoints < 25)
	{
		std::cout << "\"Oh no:( I have no energy for this attack\"" << std::endl << std::endl;
		return;
	}
	this->_hitPoints = this->_maxHitPoints;
	std::string attack[5] = {"Rubber Ducky", "Pirate Ship Mode", "Gun Wizard", "Miniontrap", "Meat Unicycle"};
	//srand(time(NULL));
	int num = rand() % 5;
	std::cout << "Heeeey this is " << attack[num] << " deadly attack!!" << std::endl;
	std::cout << "\"Wow! You're not dead?\"" << std::endl;
	std::cout << "energy points before vaulthunter.exe: " << this->_energyPoints << std::endl;
	this->_energyPoints -= 25;
	std::cout << "energy points after vaulthunter.exe: " << this->_energyPoints << std::endl << std::endl;
}