//
// Created by Мария Корогодова on 20.01.2021.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_name = "default";
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << "----------ScavTrap default constructor called----------" << std::endl;
	std::cout << "ScavTrap \"Don't you know I am fabulous! (created)" << std::endl << std::endl;
}

ScavTrap::ScavTrap(std::string name): _name(name)
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << "----------ScavTrap constructor called----------" << std::endl;
	std::cout << "ScavTrap \"Don't you know I am fabulous! My name is " << this->_name << "\" (created)" << std::endl
	<< std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "----------ScavTrap destructor called----------" << std::endl;
	std::cout << this->_name << " ScavTrap \"My servos... are seizing...\" (killed)" << std::endl << std::endl;

}

ScavTrap::ScavTrap(const ScavTrap &copy): _name(copy._name)
{
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_maxHitPoints = copy._maxHitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_maxEnergyPoints = copy._maxEnergyPoints;
	this->_level = copy._level;
	this->_meleeAttackDamage = copy._meleeAttackDamage;
	this->_rangedAttackDamage = copy._rangedAttackDamage;
	this->_armorDamageReduction = copy._armorDamageReduction;
	std::cout << "----------ScavTrap copy constructor called----------" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &op)
{
	std::cout << "----------ScavTrap operator= called----------" << std::endl;
	this->_name = op._name;
	this->_hitPoints = op._hitPoints;
	this->_maxHitPoints = op._maxHitPoints;
	this->_energyPoints = op._energyPoints;
	this->_maxEnergyPoints = op._maxEnergyPoints;
	this->_level = op._level;
	this->_meleeAttackDamage = op._meleeAttackDamage;
	this->_rangedAttackDamage = op._rangedAttackDamage;
	this->_armorDamageReduction = op._armorDamageReduction;
	return *this;
}

void ScavTrap::rangedAttack(const std::string &target)
{
	std::cout << "----------ScavTrap ranged attack called----------" << std::endl;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << " at range, causing " <<
			  this->_rangedAttackDamage << " points of damage!" << std::endl;
	std::cout << "And now I'm going to drink beer" << std::endl << std::endl;
}

void ScavTrap::meleeAttack(const std::string &target)
{
	std::cout << "----------ScavTrap melee attack called----------" << std::endl;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << " at range, causing " <<
			  this->_meleeAttackDamage << " points of damage!" << std::endl;
	std::cout << "And now I'm going to drink beer" << std::endl << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "----------ScavTrap take damage called----------" << std::endl;
	int hit = this->_hitPoints - amount + this->_armorDamageReduction;
	if (hit > this->_hitPoints)
	{
		std::cout << "amount is incorrect. The function does not work" << std::endl << std::endl;
		return;
	}
	if (hit < 0) hit = 0;
	if (hit > this->_maxHitPoints) hit = this->_maxHitPoints;
	std::cout << "ScavTrap \"Oh no, I hope I don't fall... \" (damaged)" << std::endl;
	std::cout << "hit points before damage: " << this->_hitPoints << std::endl;
	this->_hitPoints = hit;
	std::cout << "hit points after damage: " << this->_hitPoints << std::endl << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "----------ScavTrap be repaired called----------" << std::endl;
	int hit = this->_hitPoints + amount;
	if (hit < this->_hitPoints)
	{
		std::cout << "amount is incorrect. The function does not work" << std::endl << std::endl;
		return;
	}
	if (hit > this->_maxHitPoints) hit = this->_maxHitPoints;
	if (hit < 0)
		hit = 0;
	std::cout << "ScavTrap " << "\"Hey, check me out everybody! I'm dancin', I'm dancin'!\" (after repair)" <<
	std::endl;
	std::cout << "hit points before repair: " << this->_hitPoints << std::endl;
	this->_hitPoints = hit;
	std::cout << "hit points after repair: " << this->_hitPoints << std::endl << std::endl;
}

void ScavTrap::challengeNewcomer()
{
	std::cout << "----------ScavTrap challenge called----------" << std::endl;
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
