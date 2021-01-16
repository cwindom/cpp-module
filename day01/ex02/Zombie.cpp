#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
}

Zombie::~Zombie()
{
	return ;
}

void Zombie::announce()
{
	std::cout << '<' << this->_name << " (" << this->_type << ")> " << "Braiiiiiiinnnssss..." << std::endl;
}

std::string Zombie::get_name()
{
	return (this->_name);
}

std::string Zombie::get_type()
{
	return (this->_type);
}

void Zombie::set_name(std::string name)
{
	this->_name = name;
}

void Zombie::set_type(std::string type)
{
	this->_type = type;
}