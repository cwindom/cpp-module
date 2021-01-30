//
// Created by Card Windom on 1/26/21.
//

#include "Squad.hpp"

Squad::Squad() {
    this->_count = 0;
    this->units = nullptr;

//	std::cout << "count: " << this->_count << std::endl;
//	for (int j = 0; j < this->_count; j++)
//		std::cout << "unit[" << j << "] = " << this->getUnit(j) << std::endl;
}

Squad::~Squad() {
    if (!units)
        return;
    for (int i = 0; i < this->_count; i++)
        delete this->units[i];
    delete this->units;
}

Squad::Squad(const Squad &copy) {
    this->_count = 0;
    this->units = nullptr;
    for (int i = 0; i < copy.getCount(); i++)
        this->push(copy.getUnit(i)->clone());
}

Squad &Squad::operator= (const Squad &copy) {
	int i;
	if (this != &copy && copy._count >= 0)
	{
		if (this->units)
		{
			for(i = 0; i < this->_count; i++)
				delete this->units[i];
			delete this->units;
		}
		this->_count = copy.getCount();
		for (i = 0; i < copy._count; i++)
			push(copy.units[i]->clone());
	}
	return *this;
}

int Squad::getCount() const {
    return this->_count;
}

ISpaceMarine *Squad::getUnit(int N) const {
    if (N < this->_count && N >= 0 && this->_count)
    	return this->units[N];
    else
    	return nullptr;
}

int Squad::push(ISpaceMarine *marine) {
	int i;
	for (i = 0; i < this->_count; i++)
	{
		if (this->units[i] == marine)
		{
			std::cout << "ooops... this unit already in squad" << std::endl;
			return (0);
		}
	}
	if (!marine)
		return this->_count;
	if (marine)
	{
		if (this->units)
		{
			ISpaceMarine **tmp = new ISpaceMarine*[this->_count + 1];
			for (i = 0; i < this->_count; i++)
				tmp[i] = this->units[i];
			tmp[this->_count] = marine;
			if (this->_count > 1)
				delete this->units;
			this->units = tmp;
			this->_count += 1;
		}
		else
		{
			this->units = new ISpaceMarine *[1];
			this->units[0] = marine;
			this->_count = 1;
		}
	}

//	std::cout << "count: " << this->_count << std::endl;
//	for (int j = 0; j < this->_count; j++)
//		std::cout << "unit[" << j << "] = " << this->getUnit(j) << std::endl;
	return this->_count;
}
