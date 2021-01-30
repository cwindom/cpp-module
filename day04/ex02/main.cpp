#include <iostream>
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "ISquad.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main() {
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;
	//some more tests
//	ISpaceMarine *a = new TacticalMarine;
//	ISpaceMarine *b = new TacticalMarine;
//	ISpaceMarine *c = new AssaultTerminator;
//	ISquad *test = new Squad;
//	std::cout << "Squad test now have Unit[0]: " << std::endl;
//	test->push(a);
//	std::cout << "count: " << test->getCount() << std::endl;
//	std::cout << "Squad test now have Unit[0] and Unit[1]: " << std::endl;
//	test->push(b);
//	std::cout << "count: " << test->getCount() << std::endl;
//	std::cout << "Squad test now have Unit[0] and Unit[1] and Unit[2]: " << std::endl;
//	test->push(c);
//	std::cout << "count: " << test->getCount() << std::endl;
//	ISquad *test1 = new Squad;
//	std::cout << "Squad test1 now have Unit[1] as Unit[0] from Squad test: " << std::endl;
//	test1->push(test->getUnit(1));
//	std::cout << "count: " << test1->getCount() << std::endl;
//	std::cout << "check if  an unit already in the squad, make no sense at all: " << std::endl;
//	test1->push(test->getUnit(1));
//	std::cout << "operator=: " << std::endl;
//	ISquad *s1;
//	std::cout << "s1 = test, we cant add unit from test to s1" << std::endl;
//	s1 = test;
//	s1->push(test->getUnit(2));
//	std::cout << "now s1 = test1 and we can add unit from test to s1, there is no error" << std::endl;
//	s1 = test1;
//	s1->push(test->getUnit(2));
//	std::cout << "copy constructor: " << std::endl;
//	ISquad *s(test);
//	std::cout << "s created as copy of test, we cant add unit from test to s: " << std::endl;
//	s->push(test->getUnit(0));
    return 0;
}
