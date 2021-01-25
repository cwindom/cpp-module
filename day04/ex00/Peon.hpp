//
// Created by Мария Корогодова on 23.01.2021.
//

#ifndef EX00_PEON_HPP
#define EX00_PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon: public Victim
{
private:
	Peon();
public:
	Peon(std::string const name);
	virtual ~Peon();
	Peon(Peon const &copy);
	Peon &operator= (Peon const &op);

	std::string get_name() const;

	virtual void getPolymorphed() const;
};


#endif //EX00_PEON_HPP
