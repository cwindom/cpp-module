#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
//	ClapTrap clapp("Main");
//	clapp.rangedAttack("Psycho");
//	clapp.meleeAttack("Bruiser");
//	clapp.takeDamage(100);
//	clapp.beRepaired(10);
//	FragTrap a("Pandora");
//	ScavTrap b("Skelly");
//	a.rangedAttack("Psycho");
//	b.rangedAttack("Psycho");
//	a.meleeAttack("Bruiser");
//	b.meleeAttack("Bruiser");
//	a.takeDamage(100);
//	b.takeDamage(100);
//	a.beRepaired(10);
//	b.beRepaired(10);
//	a.vaulthunter_dot_exe("Badass");
//	b.challengeNewcomer();
	NinjaTrap nin("Kiiiaaa");
	nin.rangedAttack("Psycho");
	nin.meleeAttack("Bruiser");
	nin.takeDamage(100);
	nin.beRepaired(10);
	ClapTrap test("1");
	ScavTrap test1("2");
	FragTrap test2("3");
	NinjaTrap test3("4");
	test3.ninjaShoebox(test);
	test3.ninjaShoebox(test1);
	test3.ninjaShoebox(test2);
	test3.ninjaShoebox(test3);
	return 0;
}
