//
// Created by Мария Корогодова on 05.03.2021.
//

#ifndef EX02_ARRAY_H
#define EX02_ARRAY_H
#include <iostream>

template<typename T>
class Array
{
private:
	unsigned int _len;
	T *_arr;
public:
	Array(): _len(0), _arr(nullptr) {}

	Array(unsigned int n): _len(n), _arr(new T[n]) {}

	Array(const Array &copy): _len(0), _arr(nullptr)
	{
		if (copy._len && copy._arr)
			*this = copy;
	}

	Array &operator=(const Array &op)
	{
		if (this != &op)
		{
			if (_arr)
				delete[] _arr;
			_arr = new T[op._len];
			_len = op._len;
			for (unsigned int i = 0; i < _len; i++)
				_arr[i] = op._arr[i];
		}
		return *this;
	}

	virtual ~Array()
	{
		delete[] _arr;
	}

	T &operator[](unsigned int i)
	{
		if (i < 0 || i >= _len)
			throw std::out_of_range("This element is out of the limits");
		return _arr[i];
	}

	T const &operator[](unsigned int i) const
	{
		if (i < 0 || i >= _len)
			throw std::out_of_range("This element is out of the limits");
		return _arr[i];
	}
	unsigned int size() const
	{
		return _len;
	}
};


#endif //EX02_ARRAY_H
