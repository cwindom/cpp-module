//
// Created by Мария Корогодова on 20.01.2021.
//

#ifndef EX03_NINJATRAP_HPP
#define EX03_NINJATRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(std::string const name);
	NinjaTrap(NinjaTrap const &copy);

	~NinjaTrap();

	NinjaTrap &operator= (const NinjaTrap &op);

	void ninjaShoebox(NinjaTrap &tr);
	void ninjaShoebox(ClapTrap &tr);
	void ninjaShoebox(FragTrap &tr);
	void ninjaShoebox(ScavTrap &tr);
	void set_energyPoints();
	void set_maxEnergyPoints();
	void set_meleeAttackDamage();

	void print(ClapTrap *tr);
};



#endif //EX03_NINJATRAP_HPP
