#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, Weapon &weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
	return;
}

void HumanA::attack()
{
	std::cout << this->_name << " attacks with his " << _weapon.getType() << std::endl;
}