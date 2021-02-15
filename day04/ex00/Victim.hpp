//
// Created by Мария Корогодова on 23.01.2021.
//

#ifndef EX00_VICTIM_HPP
#define EX00_VICTIM_HPP

#include <iostream>

class Victim
{
private:
	Victim();
protected:
	std::string _name;
public:
	Victim(std::string const name);
	virtual ~Victim();
	Victim(Victim const &copy);
	Victim &operator= (Victim const &op);
	std::string get_name() const;
	void introduce() const;
	virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &os, Victim const &rhs);

#endif //EX00_VICTIM_HPP
