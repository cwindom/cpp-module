
#include "Pony.hpp"

void ponyOnTheHeap()
{
	Pony *Rain = new Pony("Rain", 123.3, "pink");
	Rain->someStaffHeap();
	std::cout << "Her height is " << Rain->get_height() << std::endl;
	std::cout << "Her color is " << Rain->get_color() << std::endl;
	delete Rain;
}

void ponyOnTheStack()
{
	Pony Polly = Pony("Polly", 141.12, "yellow");
	Polly.someStaffStack();
	std::cout << "Her height is " << Polly.get_height() << std::endl;
	std::cout << "Her color is " << Polly.get_color() << std::endl;
}

int main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return 0;
}
