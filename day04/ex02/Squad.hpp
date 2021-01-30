//
// Created by Card Windom on 1/26/21.
//

#ifndef EX02_SQUAD_HPP
#define EX02_SQUAD_HPP

#include <iostream>
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad: public ISquad {
private:
    int _count;
    ISpaceMarine **units;
public:
    Squad();
    ~Squad();
    Squad(Squad const &copy);
    Squad &operator= (Squad const &copy);
    virtual int getCount() const;
    virtual ISpaceMarine* getUnit(int N) const;
    virtual int push(ISpaceMarine *marine);
};


#endif //EX02_SQUAD_HPP
