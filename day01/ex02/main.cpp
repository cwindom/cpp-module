#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	Zombie Tom("name", "type");
	Tom.announce();

	Zombie *Carl;
	ZombieEvent first;
	first.setZombieType("red");
	Carl = first.newZombie("Carl");
	Carl->announce();

	Zombie *Test;
	Test = first.randomChump();
	delete Carl;
	delete Test;
	return 0;
}
