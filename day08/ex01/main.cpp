#include "span.hpp"

int main()
{
	std::cout << "-------------Standart--------------" << std::endl;
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "-----------More than N-------------" << std::endl;
	try {
		sp.addNumber(12);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------Search with only one--------" << std::endl;
	Span test1 = Span(1);
	test1.addNumber(123234);
	try {
		std::cout << test1.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-----test for 10001 elements-------" << std::endl;
	Span test2 = Span(10001);
	int arr[10001];
	for (int i = 0; i < 10001; i++)
		arr[i] = i;
	std::vector<int> t2(std::begin(arr), std::end(arr));
	test2.addNumber(t2);
	std::cout << test2.shortestSpan() << std::endl;
	std::cout << test2.longestSpan() << std::endl;
	return 0;
}