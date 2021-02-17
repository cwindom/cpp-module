#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat Tom("Tom", 2);

	try
	{
		Bureaucrat Mike("Mike", 151);
		std::cout << Mike;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
