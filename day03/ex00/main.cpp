#include <iostream>
#include "FragTrap.hpp"
int main()
{
	FragTrap a("Pandora");
	a.rangedAttack("Psycho");
	a.meleeAttack("Bruiser");
	a.takeDamage(100);
	a.beRepaired(10);
	a.vaulthunter_dot_exe("Badass");
	return 0;
}
