#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int main()
{
	FragTrap frag("Pandora");
	ScavTrap scav("Skelly");
	frag.rangedAttack("Psycho");
	scav.rangedAttack("Psycho");
	frag.meleeAttack("Bruiser");
	scav.meleeAttack("Bruiser");
	frag.takeDamage(100);
	scav.takeDamage(100);
	frag.beRepaired(10);
	scav.beRepaired(10);
	frag.vaulthunter_dot_exe("Badass");
	scav.challengeNewcomer();
	//----------------------------------------------------
	//check a copy constructor for FragTrap
	//----------------------------------------------------
//	FragTrap b(frag);
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
	//check a operator= for FragTrap
	//----------------------------------------------------
//	FragTrap c = frag;
//	c.rangedAttack("Psycho");
//	c.meleeAttack("Bruiser");
//	c.beRepaired(10);
//	c.takeDamage(100);
//	c.takeDamage(20);
//	c.rangedAttack("Psycho");
//	c.meleeAttack("Bruiser");
//	for (int i = 0; i < 5; i++)
//		c.vaulthunter_dot_exe("Badass");
	//----------------------------------------------------
	//check a copy constructor for ScavTrap
	//----------------------------------------------------
//	ScavTrap b(scav);
//	b.rangedAttack("Psycho");
//	b.meleeAttack("Bruiser");
//	//if too much hp
//	b.beRepaired(10);
//	//if too less hp
//	b.takeDamage(100);
//	b.takeDamage(20);
//	b.rangedAttack("Psycho");
//	b.meleeAttack("Bruiser");
//	b.challengeNewcomer();
	//----------------------------------------------------
	//check a operator= for ScavTrap
	//----------------------------------------------------
//	ScavTrap c;
//	c = scav;
//	c.rangedAttack("Psycho");
//	c.meleeAttack("Bruiser");
//	c.beRepaired(10);
//	c.takeDamage(100);
//	c.takeDamage(20);
//	c.rangedAttack("Psycho");
//	c.meleeAttack("Bruiser");
//	c.challengeNewcomer();
	return 0;
}
