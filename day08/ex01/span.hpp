//
// Created by Мария Корогодова on 10.03.2021.
//

#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
private:
	unsigned int _N;
	std::vector<int> _vector;
public:
	Span();
	Span(unsigned int N);
	Span(const Span &copy);
	Span &operator=(const Span &op);
	virtual ~Span();

	void addNumber(int n);
	int shortestSpan();
	int longestSpan();

	void addNumber(std::vector<int> const &vec);

class isFull: public std::exception
	{
		virtual const char* what() const throw();
	};
class tooSmall: public std::exception
	{
		virtual const char* what() const throw();
	};
};


#endif //EX01_SPAN_HPP
