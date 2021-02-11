//
// Created by Мария Корогодова on 28.01.2021.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): _amount(0)
{
	for (int i = 0; i < 4; i++)
		this->_src[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource &copy): _amount(copy._amount)
{
	for (int i = 0; i < this->_amount; i++)
		delete this->_src[i];
	for (int i = 0; i < this->_amount; i++)
	if (copy._src[i])
		this->learnMateria(copy._src[i]->clone());
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
	if (this == &copy || !copy._amount)
		return *this;
	for (int i = 0; i < this->_amount; i++)
		delete this->_src[i];
	for (int i = 0; i < copy._amount; i++)
		this->_src[i] = copy._src[i]->clone();
	this->_amount = copy._amount;
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->_amount; i++)
	{
		delete this->_src[i];
		this->_src[i] = nullptr;
	}
}

void MateriaSource::learnMateria(AMateria *mat)
{
	if (this->_amount < 4 && mat != nullptr)
	{
		for (int i = 0; i < this->_amount; i++)
		{
			if (this->_src[i] == mat)
				return;
		}
		this->_src[this->_amount + 1] = mat;
		//this->_amount++;
	}
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < this->_amount; i++)
	{
		if (this->_src[i]->getType() == type)
			return (this->_src[i]->clone());
	}
	return nullptr;
}
