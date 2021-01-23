#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	SuperTrap super("PUPER");
	super.rangedAttack("oh");
	super.meleeAttack("ah");

	return 0;
}
