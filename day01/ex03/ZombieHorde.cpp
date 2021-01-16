#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
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
	this->_N = N;
	int rand;
	this->allZombie = new Zombie[N];
	std :: srand(std::time(nullptr));
	for (int i = 0; i < N; i++)
	{
		rand = std::rand() % 10;
		allZombie[i].set_name(names[rand]);
		allZombie[i].set_type("default_type");
	}
}
ZombieHorde::~ZombieHorde()
{
	delete[] this->allZombie;
}
void ZombieHorde::announce()
{
	for (int i = 0; i < this->_N; i++)
	{
		allZombie[i].announce();
	}
}