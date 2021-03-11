//
// Created by Мария Корогодова on 10.03.2021.
//

#include "span.hpp"

Span::Span(unsigned int N): _N(N)
{
	_vector.reserve(N);
}

Span::Span(const Span &copy): _N(copy._N), _vector(copy._vector)
{
}

Span &Span::operator=(const Span &op)
{
	if (this != &op)
	{
		_vector.clear();
		this->_N = op._N;
		this->_vector = op._vector;
	}
	return *this;
}

Span::~Span()
{
	_vector.clear();
}

void Span::addNumber(int n)
{
	if (this->_vector.size() >= this->_N)
		throw Span::isFull();
	this->_vector.push_back(n);
}

int Span::shortestSpan()
{
	if (this->_vector.size() <= 1)
		throw Span::tooSmall();
	int res[2] = {-1, 0};
	std::vector<int> copy = this->_vector;
	std::sort(copy.begin(), copy.end());
	for(unsigned long i = 1; i < this->_vector.size(); i++)
	{
		res[1] = std::abs(this->_vector[i] - this->_vector[i - 1]);
		if (res[0] == -1 || res[1] < res[0])
			res[0] = res[1];
	}
	return res[0];
}

int Span::longestSpan()
{
	if (this->_vector.size() <= 1)
		throw Span::tooSmall();
	int res;
	int big = *std::max_element(this->_vector.begin(), this->_vector.end());
	int small = *std::min_element(this->_vector.begin(), this->_vector.end());
	res = big - small;
	return (res);
}

void Span::addNumber(const std::vector<int> &vec)
{
	if (this->_vector.size() + vec.size() > this->_N)
		throw Span::isFull();
	this->_vector.insert(this->_vector.end(), vec.begin(), vec.end());
}


const char *Span::isFull::what() const throw()
{
	return ("Too many numbers");
}

const char *Span::tooSmall::what() const throw()
{
	return ("Too few numbers");
}
