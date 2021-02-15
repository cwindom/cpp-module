//
// Created by Мария Корогодова on 28.01.2021.
//

#include "Character.hpp"

Character::Character()
{
}

Character::Character(std::string name): _name(name), _amount(0)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = nullptr;
}

Character::Character(const Character &copy): _name(copy._name)
{
	 for (int i = 0; i < this->_amount; i++)
	 	delete this->_inventory[i];
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = nullptr;
	for (int i = 0; i < copy._amount; i++)
		this->equip(copy._inventory[i]->clone());
	this->_amount = copy._amount;
}

Character &Character::operator=(const Character &copy)
{
	if (this == &copy)
		return *this;
	for (int i = 0; i < this->_amount; i++)
		delete(this->_inventory[i]);
	this->_name = copy._name;
	this->_amount = copy._amount;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = nullptr;
	for (int i = 0; i < copy._amount; i++)
		this->equip(copy._inventory[i]->clone());
	return *this;
}

Character::~Character()
{
	for(int i = 0; i < this->_amount; i++)
		delete this->_inventory[i];
}

std::string const &Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria *m)
{
	if (this->_amount >= 4 || !m)
		return;
	this->_inventory[this->_amount] = m;
	this->_amount++;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < this->_amount)
	{
		for (int i = idx; i < 4 - idx - 1; i++)
		{
			this->_inventory[i] = this->_inventory[i + 1];
			this->_inventory[i + 1] = nullptr;
		}
		this->_amount--;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < this->_amount && this->_inventory[idx])
	{
		this->_inventory[idx]->use(target);
	}
}
