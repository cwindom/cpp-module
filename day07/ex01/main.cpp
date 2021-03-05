#include "iter.hpp"

template <typename T>
void iter(T *arr, int len, void(*f)(T const &el))
{
	for (int i = 0; i < len; i++)
		(*f)(arr[i]);
}

template <typename T>
void myPrint(T &pr)
{
	std::cout << pr;
}

int main() {
	//my tests
	int arr[] = {0, 1, 2, 3};
	iter(arr, 4, myPrint);
	std::cout << std::endl;
	char arr1[] = {'t', 'o', 'o', 'c', 'o', 'o', 'l', 'f', 'o', 'r', 's', 'c', 'h', 'o', 'o', 'l'};
	iter(arr1, 16, myPrint);
	std::cout << std::endl;
	//check list
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense? Awesome tab2[5];
	Awesome tab2[5];
	iter( tab, 5, print );
	iter( tab2, 5, print );
	return 0;
}