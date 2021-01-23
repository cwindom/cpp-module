#include <iostream>
#include "FragTrap.hpp"
int main()
{
	FragTrap a("Pandora");
	//if too much hp
	a.beRepaired(10);
	//if too less hp
	a.takeDamage(100);
	a.takeDamage(20);
	//if have no energy
	for (int i = 0; i < 5; i++)
		a.vaulthunter_dot_exe("Badass");
	//----------------------------------------------------
	//check a copy constructor
	//----------------------------------------------------
//	FragTrap b(a);
//	b.rangedAttack("Psycho");
//	b.meleeAttack("Bruiser");
//	//if too much hp
//	b.beRepaired(10);
//	//if too less hp
//	b.takeDamage(100);
//	b.takeDamage(20);
//	b.rangedAttack("Psycho");
//	b.meleeAttack("Bruiser");
//	for (int i = 0; i < 5; i++)
//		b.vaulthunter_dot_exe("Badass");
	//----------------------------------------------------
	//check a operator=
	//----------------------------------------------------
//	FragTrap c = a;
//	c.rangedAttack("Psycho");
//	c.meleeAttack("Bruiser");
//	c.beRepaired(10);
//	c.takeDamage(100);
//	c.takeDamage(20);
//	c.rangedAttack("Psycho");
//	c.meleeAttack("Bruiser");
//	for (int i = 0; i < 5; i++)
//		c.vaulthunter_dot_exe("Badass");
	return 0;
}
