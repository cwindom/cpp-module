//
// Created by Мария Корогодова on 10.03.2021.
//

#ifndef EX02_MUTANTSTACK_HPP
#define EX02_MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
public:
	MutantStack(): std::stack<T>(){}
	MutantStack(const MutantStack &copy): std::stack<T>(copy){}
	MutantStack<T> &operator=(const MutantStack &op){ std::stack<T>::operator=(op); return *this;}
	virtual ~MutantStack(){}

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	iterator begin()
	{
		return this->c.begin();
	}
	iterator end()
	{
		return this->c.end();
	}
	reverse_iterator rbegin()
	{
		return this->c.rbegin();
	}
	reverse_iterator rend()
	{
		return this->c.rend();
	}
};

#include "MutantStack.cpp"

#endif //EX02_MUTANTSTACK_HPP
