#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	SuperTrap super("PUPER");
	//здесь почему-то не работает. посмотреть почему. это последнее что осталось сделать с этим упражнением
	super.rangedAttack("oh");
	super.meleeAttack("ah");

	return 0;
}
