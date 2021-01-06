#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>

class Pony
{
private:
	std::string _name;
	double _height;
	std::string _color;
public:
	Pony(std::string name, double height, std::string color);
	~Pony();
	void someStaffHeap();
	void someStaffStack();
	std::string get_color(void);
	double get_height(void);
};

#endif
