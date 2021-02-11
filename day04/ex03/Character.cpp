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

Character::Character(const Character &copy): _name(copy._name), _amount(copy._amount)
{
	for (int i = 0; i < this->_amount; i++)
	{
		delete this->_inventory[i];
		this->_inventory[i] = nullptr;
	}
	for (int i = 0; i < copy._amount; i++)
		this->equip(copy._inventory[i]->clone());
}

Character &Character::operator=(const Character &copy)
{
	if (this == &copy || !copy._amount)
		return *this;
	this->_name = copy._name;
	for (int i = 0; i < this->_amount; i++)
		delete this->_inventory[i];
	for (int i = 0; i < copy._amount; i++)
		this->_inventory[i] = copy._inventory[i]->clone();
	this->_amount = copy._amount;
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < this->_amount; i++)
		delete this->_inventory[i];
}

std::string const &Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria *m)
{
	if (this->_amount >= 4)
		return ;
	if (m)
		this->_inventory[_amount++] = m;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < this->_amount)
		this->_inventory[idx] = nullptr;
	if (idx != this->_amount--)
	{
		for (int i = idx; i < this->_amount - 1; i++)
		{
			this->_inventory[i] = this->_inventory[i + 1];
			this->_inventory[i + 1] = nullptr;
		}
	}
	this->_amount--;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < this->_amount)
		this->_inventory[idx]->use(target);
}
