//
// Created by Мария Корогодова on 28.01.2021.
//

#include "Character.hpp"

Character::Character()
{
	this->_name = "default";
	for (int i = 0; i < INVENTORY; i++)
		this->_inventory[i] = nullptr;
}

Character::Character(std::string name): _name(name)
{
	for (int i = 0; i < INVENTORY; i++)
		this->_inventory[i] = nullptr;
}

Character::Character(const Character &copy): _name(copy._name)
{
	for (int i = 0; i < INVENTORY; i++)
	{
		if (this->_inventory[i])
			this->_inventory[i] = nullptr;
		if (copy._inventory[i])
			this->equip(copy._inventory[i]->clone());
		else
			this->_inventory[i] = nullptr;
	}
}

Character &Character::operator=(const Character &copy)
{
	if (this == &copy)
		return *this;
	this->_name = copy._name;
	for (int i = 0; i < INVENTORY; i++)
	{
		if (this->_inventory[i])
			this->_inventory[i] = nullptr;
		if (copy._inventory[i])
			this->equip(copy._inventory[i]->clone());
		else
			this->_inventory[i] = nullptr;
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < INVENTORY; i++)
	{
		if (this->_inventory[i] != nullptr)
			delete this->_inventory[i];
	}
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	int count = 0;
	for (int i = 0; i < INVENTORY; i++)
		if(this->_inventory[i])
			count++;
	if (count == 4 || m == nullptr) //значит есть 0, 1, 2, 3 элементы
		return;
	else
		_inventory[count] = m; //иначе можно заполнить count потому что индексы начинаются с нуля
}

void Character::unequip(int idx)
{

}

void Character::use(int idx, ICharacter &target)
{
	int i = 0;
	while (i < INVENTORY && this->_inventory[i])
		i++;
	if (idx < 0 || idx >= INVENTORY || this->_inventory[idx] == nullptr)
	    return;

	//this->_inventory[idx]->use(target);
}
