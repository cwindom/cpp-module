#include <iostream>
#include "whatever.hpp"

template <typename T>
void swap(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
}
template <typename T>
 T& min(T& a, T&b)
{
	if (a < b)
		return a;
	else
		return b;
}
template <typename T>
 T& max( T& a, T&b)
{
	if (a > b)
		return a;
	else
		return b;
}

int main()
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	//-----------------------------------------------------------------------
	std::cout << "--------------Some more tests--------------" << std::endl;
	float w = 42.2f;
	float q = 21.1f;
	std::cout << "before: w = " << w << ", q = " << q << std::endl;
	::swap(w, q);
	std::cout << "after:  w = " << w << ", q = " << q << std::endl;
	char z = '*';
	char x = 122;
	std::cout << "before: z = " << z << ", x = " << x << std::endl;
	::swap(z, x);
	std::cout << "after:  z = " << z << ", x = " << x << std::endl;
	//-----------------------------------------------------------------------
	//для этого теста надо раскомментировать строку 22 в whatever.hpp
	std::cout << "--------------Check list--------------" << std::endl;
//	Awesome Aw(6);
//	Awesome Ar(7);
//	std::cout << "Before swap: Aw = " << Aw.get_n() << ", Ar = " << Ar.get_n() << std::endl;
//	swap(Aw, Ar);
//	std::cout << "After swap:  Aw = " << Aw.get_n() << ", Ar = " << Ar.get_n() << std::endl;
//	std::cout << "min( c, d ) = " << ::min( Aw, Ar ).get_n() << std::endl;
//	std::cout << "max( c, d ) = " << ::max( Aw, Ar ).get_n() << std::endl;
	return 0;
}
