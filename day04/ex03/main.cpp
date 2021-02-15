#include <iostream>
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob; // |
	delete me; //comment for more test
	delete src; // |

	//-----------------------------------------------------
	//soooome moooore test meh
//	std::cout << "-------------------------------------\n";
//	ICharacter *test = new Character("test");
//	ICharacter *tom = new Character("Tom");
//
//	test->equip(tmp);
//	tmp = src->createMateria("fire");
//	std::cout << "if unknown materia(expected null): " << tmp << std::endl;
//	tmp = src->createMateria("ice");
//	me->equip(tmp);
//	std::cout << "use with new materia character me: ";
//	me->use(2, *tom);
//	std::cout << "use with new materia character test(expected nothing cuz it has only one materia): ";
//	test->use(2, *tom);
//	std::cout << "\nuse with new materia character test(expected heals): ";
//	test->use(0, *tom);
}
