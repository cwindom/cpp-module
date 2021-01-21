//
// Created by Мария Корогодова on 20.01.2021.
//

#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &copy);
	~ScavTrap();
	ScavTrap &operator= (const ScavTrap &op);
	void challengeNewcomer();
};


#endif //EX01_SCAVTRAP_HPP
