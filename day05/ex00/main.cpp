#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat Tom("Tom", 2);
	//operator<<
	std::cout << Tom;
	//try low
	try
	{
		Bureaucrat Low("Low", 151);
		std::cout << Low;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	//try high
	try
	{
		Bureaucrat High("High", 0);
		std::cout << High;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	//try increment(high)
	try
	{
		Bureaucrat increment("increment", 1);
		std::cout << increment;
		increment.incrementGrade();
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	//try decrement(low)
	try
	{
		Bureaucrat decrement("decrement", 150);
		std::cout << decrement;
		decrement.decrementGrade();
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
