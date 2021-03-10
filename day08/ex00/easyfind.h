//
// Created by Мария Корогодова on 09.03.2021.
//

#ifndef EX00_EASYFIND_H
#define EX00_EASYFIND_H

template <typename T>
int easyFind(T &src, int toFind)
{
	typename T::const_iterator i;

	i = src.begin();
	while (i != src.end())
	{
		if (*i == toFind)
			return *i;
		i++;
	}
	throw std::out_of_range("Not found");
}

#endif //EX00_EASYFIND_H
