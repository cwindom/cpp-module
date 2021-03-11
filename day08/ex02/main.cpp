#include <iostream>
#include <list>
#include "MutantStack.hpp"
int main()
{
	//subject
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "--------------------------------------\n";
	std::cout << "              More tests\n";
	MutantStack<int> test;
	test.push(21);
	test.push(42);
	test.push(10);
	test.push(3);
	test.push(2021);
	std::cout << "--------------------------------------\n";
	std::cout << "           Usual iterator\n";
	std::cout << "--------------------------------------\n";
	std::cout << " | ";
	MutantStack<int>::iterator itest = test.begin();
	itest--;
	while(++itest != test.end())
		std::cout << *itest << " | ";
	std::cout << "\n--------------------------------------\n";
	std::cout << "    Operator copy + reverse iterator\n";
	std::cout << "--------------------------------------\n";
	MutantStack<int> testcopy(test);
	MutantStack<int>::reverse_iterator itestcopy = testcopy.rbegin();
	std::cout << " | ";
	itestcopy--;
	while(++itestcopy != testcopy.rend())
		std::cout << *itestcopy << " | ";
	std::cout << "\n--------------------------------------\n";
	std::cout << "         Usual iterator from end\n";
	std::cout << "--------------------------------------\n";
	MutantStack<int>::iterator itend = testcopy.end();
	std::cout << " | ";
	while(itend-- != testcopy.begin())
		std::cout << *itend << " | ";
	std::cout << "\n--------------------------------------\n";
	std::cout << "      Operator = + const iterator\n";
	std::cout << "--------------------------------------\n";
	testcopy.push(23);
	testcopy.pop();
	testcopy.push(42);
	MutantStack<int> testas = testcopy;
	MutantStack<int>::const_iterator ias = testas.begin();
	ias--;
	while(++ias != testas.end())
		std::cout << *ias << " | ";
	return 0;
}