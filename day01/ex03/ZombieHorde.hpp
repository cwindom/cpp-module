#ifndef EX03_ZOMBIEHORDE_HPP
#define EX03_ZOMBIEHORDE_HPP
#include "Zombie.hpp"

class ZombieHorde
{
private:
	int _N;
	std::string _type;
	Zombie *allZombie;
public:
	ZombieHorde(int N);
	~ZombieHorde();
	void announce();
};


#endif
