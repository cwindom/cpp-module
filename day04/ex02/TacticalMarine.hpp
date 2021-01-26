//
// Created by Card Windom on 1/26/21.
//

#ifndef EX02_TACTICALMARINE_HPP
#define EX02_TACTICALMARINE_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine {
public:
    TacticalMarine();
    ~TacticalMarine();
    TacticalMarine(TacticalMarine const &copy);
    TacticalMarine &operator= (TacticalMarine const &copy);

    virtual ISpaceMarine* clone() const;
    virtual void battleCry() const;
    virtual void rangedAttack() const;
    virtual void meleeAttack() const;
};


#endif //EX02_TACTICALMARINE_HPP
