#include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::cout << brain << std::endl;
	std::string *pointer;
	pointer = &brain;
	std::cout << *pointer << std::endl;
	std::string &reference = brain;
	std::cout << reference << std::endl;
	return 0;
}
