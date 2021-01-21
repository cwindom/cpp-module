//
// Created by Мария Корогодова on 19.01.2021.
//

#ifndef EX00_FRAGTRAP_HPP
#define EX00_FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string const name);
	FragTrap(FragTrap const &copy);
	~FragTrap();
	FragTrap &operator= (const FragTrap &op);
	void vaulthunter_dot_exe(std::string const & target);

};


#endif //EX00_FRAGTRAP_HPP
