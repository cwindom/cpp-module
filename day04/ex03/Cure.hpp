//
// Created by Мария Корогодова on 28.01.2021.
//

#ifndef EX03_CURE_HPP
#define EX03_CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure: public AMateria
{
public:
	Cure();
	virtual ~Cure();
	Cure(Cure const &copy);
	Cure &operator= (Cure const &copy);

	virtual AMateria* clone() const;
	virtual void use(ICharacter &target);
};


#endif //EX03_CURE_HPP
