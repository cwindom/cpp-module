#ifndef EX05_HUMAN_HPP
#define EX05_HUMAN_HPP

#include <iostream>
#include "Brain.hpp"

class Human
{
private:
	const Brain brain;
public:
	Human();
	~Human();
	std::string identify() const;
	const Brain &getBrain() const;
};


#endif
