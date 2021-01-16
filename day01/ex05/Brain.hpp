#ifndef EX05_BRAIN_HPP
#define EX05_BRAIN_HPP

#include <iostream>

class Brain
{
private:
	int _iq;
public:
	Brain();
	~Brain();
	std::string identify() const;
};


#endif
