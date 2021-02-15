//
// Created by Card Windom on 1/26/21.
//

#include "Squad.hpp"

Squad::Squad() {
    this->_count = 0;
    this->units = nullptr;
}

Squad::~Squad() {
    if (!units)
        return;
    for (int i = 0; i < this->_count; i++)
        delete this->units[i];
    delete this->units;
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
		this->_count = copy.getCount();
		for (int i = 0; i < copy.getCount(); i++)
			this->push(copy.getUnit(i)->clone());
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
    if (N < this->_count && N >= 0 && this->_count)
    	return this->units[N];
    else
    	return nullptr;
}

int Squad::push(ISpaceMarine *marine) {
	for (int i = 0; i < this->_count; i++)
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
			for (int i = 0; i < this->_count; i++)
				tmp[i] = this->units[i];
			delete this->units;
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
	return this->_count;
}
