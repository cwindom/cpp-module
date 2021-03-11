//
// Created by Мария Корогодова on 09.03.2021.
//

#ifndef EX00_EASYFIND_H
#define EX00_EASYFIND_H
#include <algorithm>

template <typename T>
int easyFind(T &src, int find)
{
	typename T::const_iterator iterator;
	iterator = std::find(src.begin(), src.end(), find);
	if (iterator == src.end() && *iterator != find)
		throw std::out_of_range("Not found");
	return *iterator;
}

#endif //EX00_EASYFIND_H
