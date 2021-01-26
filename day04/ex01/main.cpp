#include <iostream>
#include "AWeapon.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
    //------------------------------------------------------
    //test with mutant
//    std::cout << *me;
//    Enemy* a = new SuperMutant();
//    AWeapon* ar = new PlasmaRifle();
//    AWeapon* af = new PowerFist();
//    me->equip(ar);
//    me->attack(a);
//    std::cout << *me;
//    me->equip(af);
//    me->attack(a);
//    std::cout << *me;
    //--------------------------------------------------------
    //for check enemy's hp
//    AWeapon *pw = new PowerFist();
//    Enemy *mut = new SuperMutant();
//    me->equip(pw);
//    for (int i = 0; i < 4; i++)
//        me->attack(mut);
    //--------------------------------------------------------
    //for check recoverAP
//    for (int i = 0; i < 100; i++)
//        me->recoverAP();
//    std::cout << "AP after recover: " << me->getAP();
    //deleting if ? think before do it
//    if (b != NULL)
//        delete b;
//    if (me)
//        delete me;
//    if (pr)
//        delete pr;
//    if (pf)
//        delete pf;
    return 0;
}