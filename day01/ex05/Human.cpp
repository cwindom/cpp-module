#include "Human.hpp"

Human::~Human()
{
	return;
}

Human::Human()
{
	return;
}

std::string Human::identify() const
{
	return (this->brain.identify());
}

const Brain &Human::getBrain() const
{
	return(this->brain);
}