#include "Brain.hpp"

Brain::Brain() : _iq(120)
{
	std::cout << "Brain with iq " << this->_iq << " is created" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain with iq " << this->_iq << " is destroyed" << std::endl;
}
# include <sstream>

std::string Brain::identify() const
{
	std::stringstream str;
	str << "0x" << std::uppercase << std::hex << (long)this;
	return (str.str());
}