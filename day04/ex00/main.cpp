#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "MyVictim.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
//	//check error with default constructor
//	Sorcerer rob;
//	//check my class MyVictim
//	Sorcerer sedric("Sedric", "the Magnificent");
//	MyVictim sheep("Dolly");
//	std::cout << sheep;
//	sedric.polymorph(sheep);
	return 0;
}
