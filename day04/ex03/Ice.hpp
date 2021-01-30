//
// Created by Мария Корогодова on 28.01.2021.
//

#ifndef EX03_ICE_HPP
#define EX03_ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice: public AMateria
{
public:
	Ice();
	virtual ~Ice();
	Ice(Ice const &copy);
	Ice &operator= (Ice const &copy);

	virtual AMateria* clone() const;
	virtual void use(ICharacter &target);
};


#endif //EX03_ICE_HPP
