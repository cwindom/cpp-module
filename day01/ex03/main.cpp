#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main()
{
	Zombie A("a", "s");
	A.announce();
	ZombieHorde z(5);
	z.announce();
	return 0;
}
