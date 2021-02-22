#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat Tom("Tom", 2);
	//operator<<
	std::cout << Tom;
	Tom.decrementGrade();
    std::cout << "Tom after decrement: " << Tom;
    Tom.incrementGrade();
    std::cout << "Tom after increment: " << Tom;
	//try low
	try
	{
		Bureaucrat Low("Low", 151);
		std::cout << Low;
	}
	catch (std::exception const &e)
	{
		std::cerr << "Try grade 151: " << e.what() << std::endl;
	}
	//try high
	try
	{
		Bureaucrat High("High", 0);
		std::cout << High;
	}
	catch(std::exception const &e)
	{
		std::cerr << "Try grade 0: " << e.what() << std::endl;
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
		std::cerr << "Try high grade 1: " << e.what() << std::endl;
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
		std::cerr << "Try low grade 150: " << e.what() << std::endl;
	}
	return 0;
}
