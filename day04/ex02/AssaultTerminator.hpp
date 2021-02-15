//
// Created by Card Windom on 1/26/21.
//

#ifndef EX02_ASSAULTTERMINATOR_HPP
#define EX02_ASSAULTTERMINATOR_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine {
public:
    AssaultTerminator();
    virtual ~AssaultTerminator();
    AssaultTerminator(AssaultTerminator const &copy);
    AssaultTerminator &operator= (AssaultTerminator const &copy);

    virtual void battleCry() const;
    virtual void rangedAttack() const;
    virtual void meleeAttack() const;

    ISpaceMarine *clone() const;
};


#endif //EX02_ASSAULTTERMINATOR_HPP
