//
// Created by Мария Корогодова on 19.01.2021.
//

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_name = "default";
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << "I'm over here! (created)" << std::endl << std::endl;;
}

FragTrap::FragTrap(std::string name): _name(name)
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << "\"I'm over here! My name is " << this->_name << "\" (created)" << std::endl << std::endl;;
}

FragTrap::~FragTrap()
{
	std::cout << this->_name << " \"I can see... the code\" (killed)" << std::endl;

}

FragTrap::FragTrap(const FragTrap &copy): _name(copy._name)
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
}

FragTrap & FragTrap::operator=(const FragTrap &op)
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
	return *this;
}

void FragTrap::rangedAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " <<
	this->_rangedAttackDamage << " points of damage!" << std::endl << std::endl;
}

void FragTrap::meleeAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " <<
			  this->_meleeAttackDamage << " points of damage!" << std::endl << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	int hit = this->_hitPoints - amount + this->_armorDamageReduction;
	if (hit > this->_hitPoints)
	{
		std::cout << "amount is incorrect. The function does not work" << std::endl << std::endl;
		return;
	}
	if (hit < 0) hit = 0;
	if (hit > this->_maxHitPoints) hit = this->_maxHitPoints;
	std::cout << "\"Oh my God, I'm leaking! I think I'm leaking! Ahhhh, I'm leaking! There's oil everywhere!\" (damaged)" << std::endl;
	std::cout << "hit points before damage: " << this->_hitPoints << std::endl;
	this->_hitPoints = hit;
	std::cout << "hit points after damage: " << this->_hitPoints << std::endl << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
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
	std::cout << "\"Good as new, I think. Am I leaking?\" (after repair)" << std::endl;
	std::cout << "hit points before repair: " << this->_hitPoints << std::endl;
	this->_hitPoints = hit;
	std::cout << "hit points after repair: " << this->_hitPoints << std::endl << std::endl;
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
	srand(time(NULL));
	int num = rand() % 5;
	std::cout << "Heeeey this is " << attack[num] << " deadly attack!!" << std::endl;
	std::cout << "\"Wow! You're not dead?\"" << std::endl;
	std::cout << "energy points before vaulthunter.exe: " << this->_energyPoints << std::endl;
	this->_energyPoints -= 25;
	std::cout << "energy points after vaulthunter.exe: " << this->_energyPoints << std::endl << std::endl;
}