//
// Created by Мария Корогодова on 25.01.2021.
//

#include "MyVictim.hpp"

MyVictim::MyVictim(const std::string name) : Victim(name)
{
	std::cout << "My victim created" << std::endl;
}

MyVictim::MyVictim(const MyVictim &copy):Victim(copy._name)
{
	*this = copy;
}

MyVictim::~MyVictim()
{
	std::cout << "My Victim deleted" << std::endl;
}

MyVictim &MyVictim::operator=(const MyVictim &op)
{
	Victim::operator=(op);
	return *this;
}

std::string MyVictim::get_name() const
{
	return Victim::get_name();
}

void MyVictim::getPolymorphed() const
{
	std::cout << this->_name << " is my new Victim for test" << std::endl <<
	"Dollymorphed" << std::endl;
}

