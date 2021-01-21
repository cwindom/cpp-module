//
// Created by Мария Корогодова on 20.01.2021.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_name = "default";
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << "ScavTrap \"Don't you know I am fabulous! (created)" << std::endl << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << "ScavTrap \"Don't you know I am fabulous! My name is " << this->_name << "\" (created)" << std::endl
	<< std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->_name << " ScavTrap \"My servos... are seizing...\" (killed)" << std::endl;

}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy._name)
{
	*this = copy;
	std::cout << this->_name << " \"I am copy\"" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &op)
{
	ClapTrap::operator=(op);
	return *this;
}

void ScavTrap::challengeNewcomer()
{
	std::string things[7] = {	"Sing in the shower",
								 "Feed the capybara at the zoo",
						  		"Wielding a bare wrapping paper tube as a lightsaber",
						  		"Pretending to be Jamie Oliver while cooking",
						  		"Checking symptoms on the internet, and convincing himself he is on death's door",
						  		"Searching for phone while holding it in hand.",
						  		"Cry because of the deadline"};
	int num = rand() % 7;
	std::cout << "ScavTrap challenge: " << things[num] << std::endl << std::endl;
}
