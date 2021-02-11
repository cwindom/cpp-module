//
// Created by Мария Корогодова on 28.01.2021.
//

#ifndef EX03_AMATERIA_HPP
#define EX03_AMATERIA_HPP

#include <iostream>
class AMateria;
#include "ICharacter.hpp"

class AMateria
{
protected:
	AMateria();
	unsigned int _xp;
	std::string _type;
public:
	AMateria(std::string const & type);
	AMateria(const AMateria &copy);
	AMateria &operator= (const AMateria &op);
	virtual ~AMateria();

	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter &target);
};


#endif //EX03_AMATERIA_HPP
