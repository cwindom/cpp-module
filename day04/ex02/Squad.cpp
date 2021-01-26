//
// Created by Card Windom on 1/26/21.
//

#include "Squad.hpp"

Squad::Squad() {
    this->_count = 0;
    this->units = NULL;
}

Squad::~Squad() {
    if (!units)
        return;
    for (int i = 0; i < this->_count; i++)
        delete units[i];
    delete this->units;
}

Squad::Squad(const Squad &copy) {
    this->_count = 0;
    this->units = NULL;
    for (int i = 0; i < copy.getCount(); i++)
        this->push(copy.getUnit(i)->clone());

}

Squad &Squad::operator=(const Squad &copy) {
    return *this;
}

int Squad::getCount() const {
    return this->_count;
}

ISpaceMarine *Squad::getUnit(int N) const {
    //проверить если подали слишком большое или слишком маленькое число
    if (N > this->_count || )
    return this->units[N];
}

int Squad::push(ISpaceMarine *unit) {

    return 0;
}
