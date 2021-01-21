//
// Created by Мария Корогодова on 21.01.2021.
//

#ifndef EX04_SUPERTRAP_HPP
#define EX04_SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	SuperTrap();
	SuperTrap(std::string const &name);
	~SuperTrap();
	SuperTrap(SuperTrap const &copy);
	SuperTrap &operator= (const SuperTrap &op);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
};


#endif //EX04_SUPERTRAP_HPP
