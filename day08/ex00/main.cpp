#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <set>
#include "easyfind.h"
int main()
{
	std::list<int> lst;
	for (int i = 0; i < 5; i++)
		lst.push_back(i);
	try
	{
		std::cout << "With list: " << easyFind(lst, 4) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::vector<int> vec;
	for (int i = 0; i < 5; i++)
		vec.push_back(i + 10);
	try
	{
		std::cout << "With vector: " << easyFind(vec, 12) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::set<int> set;
	for (int i = 0; i < 5; i++)
		set.insert(i + 10);
	try
	{
		std::cout << "With set: " << easyFind(set, 15) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
