#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
int main()
{
	ClapTrap clapp("Main");
	clapp.rangedAttack("Psycho");
	clapp.meleeAttack("Bruiser");
	clapp.takeDamage(100);
	clapp.beRepaired(10);
	FragTrap a("Pandora");
	ScavTrap b("Skelly");
	a.rangedAttack("Psycho");
	b.rangedAttack("Psycho");
	a.meleeAttack("Bruiser");
	b.meleeAttack("Bruiser");
	a.takeDamage(100);
	b.takeDamage(100);
	a.beRepaired(10);
	b.beRepaired(10);
	a.vaulthunter_dot_exe("Badass");
	b.challengeNewcomer();
	return 0;
}
