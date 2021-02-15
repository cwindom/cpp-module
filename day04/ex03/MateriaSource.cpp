//
// Created by Мария Корогодова on 28.01.2021.
//

#include "MateriaSource.hpp"


MateriaSource::MateriaSource(): _amount(0)
{
	for (int i = 0; i < 4; i++)
		this->_src[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	for (int i = 0; i < this->_amount; i++)
		delete this->_src[i];
	this->_amount = copy._amount;
	for (int i = 0; i < 4; i++)
		this->_src[i] = nullptr;
	for (int i = 0; i < copy._amount; i++)
		this->learnMateria(copy._src[i]->clone());
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
	if (this == &copy)
		return *this;
	for (int i = 0; i < this->_amount; i++)
		delete this->_src[i];
	this->_amount = copy._amount;
	for (int i = 0; i < 4; i++)
		this->_src[i] = nullptr;
	for (int i = 0; i < copy._amount; i++)
		this->learnMateria(copy._src[i]->clone());
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->_amount; i++)
		delete this->_src[i];
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->_amount >= 4 || !m)
		return;
	this->_src[this->_amount] = m;
	this->_amount++;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < this->_amount; i++)
	{
		if (this->_src[i]->getType() == type)
			return this->_src[i]->clone();
	}
	//if type is unknown
	return NULL;
}
