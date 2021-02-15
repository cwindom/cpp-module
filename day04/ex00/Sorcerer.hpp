//
// Created by Мария Корогодова on 23.01.2021.
//

#ifndef EX00_SORCERER_HPP
#define EX00_SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
private:
	std::string _name;
	std::string _title;
	Sorcerer();
public:
	Sorcerer(std::string const name, std::string const title);
	Sorcerer(Sorcerer const &copy);
	virtual ~Sorcerer();
	Sorcerer &operator= (Sorcerer const &op);

	std::string get_name() const;
	std::string get_title() const;

	void introduce();
	void polymorph(Victim const &v) const;
};

std::ostream &operator<<(std::ostream &os, Sorcerer const &rhs);

#endif //EX00_SORCERER_HPP
