//
// Created by Card Windom on 1/26/21.
//

#include "Squad.hpp"

Squad::Squad() {
    this->_count = 0;
    this->units = nullptr;
}

Squad::~Squad() {
    if (units)
	{
		for (int i = 0; i < this->_count; i++)
			delete this->units[i];
		delete this->units;
	}
}

Squad::Squad(const Squad &copy) {
	if (copy._count >= 0)
	{
		if (this->units)
		{
			for(int i = 0; i < this->_count; i++)
				delete this->units[i];
			delete this->units;
		}
		this->units = nullptr;
		for (int i = 0; i < copy.getCount(); i++)
			this->push(copy.getUnit(i)->clone());
		this->_count = copy.getCount();
	}
}

Squad &Squad::operator= (const Squad &copy) {
	if (this != &copy && copy._count >= 0)
	{
		if (this->units)
		{
			for(int i = 0; i < this->_count; i++)
				delete this->units[i];
			delete this->units;
		}
		this->units = nullptr;
		this->_count = copy.getCount();
		for (int i = 0; i < copy._count; i++)
			this->push(copy.getUnit(i)->clone());
	}
	return *this;
}

int Squad::getCount() const {
    return this->_count;
}

ISpaceMarine *Squad::getUnit(int N) const {
    if (N < this->_count && N >= 0 && this->units[N])
    	return this->units[N];
    else
    	return nullptr;
}

int Squad::push(ISpaceMarine *marine) {
	if (!marine)
		return this->_count;
	for (int i = 0; i < this->_count; i++)
	{
		if (this->units[i] == marine)
		{
			std::cout << "ooops... this unit already in squad" << std::endl;
			return (0);
		}
	}
	ISpaceMarine **tmp = new ISpaceMarine*[this->_count + 1];
	for (int i = 0; i < this->_count; i++)
		tmp[i] = this->units[i];
	if (this->_count > 0)
		delete this->units;
	tmp[this->_count] = marine;
	this->units = tmp;
	this->_count++;
	return this->_count;
}
