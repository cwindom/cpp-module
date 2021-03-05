#include <iostream>

class Base
{
public:
	virtual ~Base();
};

Base::~Base()
{

}

class A: public Base
{
};

class B: public Base
{
};

class C: public Base
{
};

Base * generate(void)
{
	int n = rand() % 3;
	switch(n)
	{
		case 0: return new A;
		case 1: return new B;
		case 2: return new C;
	}
	return nullptr;
}

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A *>(p) != nullptr)
		std::cout << "Hello, this is A by pointer" << std::endl;
	if (dynamic_cast<B *>(p) != nullptr)
		std::cout << "Hello, this is B by pointer" << std::endl;
	if (dynamic_cast<C *>(p) != nullptr)
		std::cout << "Hello, this is C by pointer" << std::endl;
}

void identify_from_reference( Base & p)
{
	if (dynamic_cast<A *>(&p) != nullptr)
		std::cout << "Hello, this is A by reference" << std::endl;
	if (dynamic_cast<B *>(&p) != nullptr)
		std::cout << "Hello, this is B by reference" << std::endl;
	if (dynamic_cast<C *>(&p) != nullptr)
		std::cout << "Hello, this is C by reference" << std::endl;
}

int main()
{
	srand(time(nullptr));
	std::cout << "---------------------\n";
	std::cout << "First test\n";
	Base *ptr = generate();
	identify_from_pointer(ptr);
	identify_from_reference(*ptr);
	std::cout << "---------------------\n";
	std::cout << "Second test\n";
	Base *ptr1 = generate();
	identify_from_pointer(ptr1);
	identify_from_reference(*ptr1);
	std::cout << "---------------------\n";
	std::cout << "Third test\n";
	Base *ptr2 = generate();
	identify_from_pointer(ptr2);
	identify_from_reference(*ptr2);
	return 0;
}

