//
// Created by Мария Корогодова on 25.01.2021.
//

#ifndef EX00_MYVICTIM_HPP
#define EX00_MYVICTIM_HPP

#include <iostream>
#include "Victim.hpp"

class MyVictim: public Victim
{
private:
	MyVictim();
public:
	MyVictim(std::string const name);
	virtual ~MyVictim();
	MyVictim(MyVictim const &copy);
	MyVictim &operator= (MyVictim const &op);

	std::string get_name() const;

	virtual void getPolymorphed() const;
};


#endif //EX00_MYVICTIM_HPP
