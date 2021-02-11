//
// Created by Мария Корогодова on 28.01.2021.
//

#ifndef EX03_CHARACTER_HPP
#define EX03_CHARACTER_HPP

#include "ICharacter.hpp"
//#include "Ice.hpp"
//#include "Cure.hpp"
//#include "AMateria.hpp"
//class Character;

class Character: public ICharacter
{
private:
	AMateria *_inventory[4];
	std::string _name;
	int _amount;
	Character();
public:
	Character(std::string name);
	Character(Character const &copy);
	Character &operator= (Character const &copy);
	virtual ~Character();

	virtual std::string const &getName() const;
	virtual void equip(AMateria * m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};


#endif //EX03_CHARACTER_HPP
