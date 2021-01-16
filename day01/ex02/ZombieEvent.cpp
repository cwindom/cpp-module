#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	return;
}

ZombieEvent::~ZombieEvent()
{
	return;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->_type));
}

void ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie *ZombieEvent::randomChump()
{
	Zombie *RandomZombie;
	std::string names[10];
	names[0] = "cwindom";
	names[1] = "kallard";
	names[2] = "cjona";
	names[3] = "sbednar";
	names[4] = "drina";
	names[5] = "ccaptain";
	names[6] = "gwynton";
	names[7] = "flouie";
	names[8] = "edraugr";
	names[9] = "brantari";
	srand (time(NULL));
	int rand = std::rand() % 10;
	RandomZombie = new Zombie(names[rand], this->_type);
	RandomZombie->announce();
	return (RandomZombie);
}

