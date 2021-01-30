//
// Created by Мария Корогодова on 28.01.2021.
//

#ifndef EX03_CHARACTER_HPP
#define EX03_CHARACTER_HPP

#include "ICharacter.hpp"
#include "Character.hpp"
#define INVENTORY 4

class Character: public ICharacter
{
private:
	AMateria *_inventory[INVENTORY];
	std::string _name;
	Character();
public:

	Character(std::string name);
	Character(Character const &copy);
	Character &operator= (Character const &copy);
	virtual ~Character();

	virtual std::string getName() const;
	virtual void equip(AMateria * m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};


#endif //EX03_CHARACTER_HPP
