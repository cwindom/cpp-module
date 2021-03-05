#include "Array.h"
#include <string>
int main()
{
	Array<int> voidArray(void);
	std::cout << "----------------Test with char----------------" << std::endl;
	Array<char> test1(5);
	for (unsigned int i = 0; i < test1.size(); i++)
		test1[i] = i + 100;
	for (unsigned int i = 0; i < test1.size(); i++)
		std::cout << test1[i] << std::endl;
	try
	{
		test1[6];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----------------Test with string----------------" << std::endl;
	Array<std::string> test2(5);
	std::string str = "Hello";
	for (unsigned int i = 0; i < test2.size(); i++)
		test2[i] = str.substr(0, i + 1);
	for (unsigned int i = 0; i < test2.size(); i++)
		std::cout << test2[i] << std::endl;
	try
	{
		test2[6];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----------------Test with int----------------" << std::endl;
	Array<int> test3(5);
	for (unsigned int i = 0; i < test3.size(); i++)
		test3[i] = i;
	for (unsigned int i = 0; i < test3.size(); i++)
		std::cout << test3[i] << std::endl;
	try
	{
		test3[6];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----------------Test with double----------------" << std::endl;
	Array<double> test4(5);
	for (unsigned int i = 0; i < test4.size(); i++)
		test4[i] = i + 0.1;
	for (unsigned int i = 0; i < test4.size(); i++)
		std::cout << test4[i] << std::endl;
	try
	{
		test4[6];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----------------Test operator=----------------" << std::endl;
	Array<int> test5(5);
	for (unsigned int i = 0; i < test5.size(); i++)
		test5[i] = i;
	std::cout << "Elements of test5: |";
	for (unsigned int i = 0; i < test5.size(); i++)
		std::cout << test5[i] << "|";
	std::cout << std::endl;
	Array<int> test6 = test5;
	std::cout << "Elements of test6 after =: |";
	for (unsigned int i = 0; i < test6.size(); i++)
		std::cout << test6[i] << "|";
	for (unsigned int i = 0; i < test6.size(); i++)
		test6[i] = i + 10;
	std::cout << std::endl;
	std::cout << "Elements of test6 after change: |";
	for (unsigned int i = 0; i < test6.size(); i++)
		std::cout << test6[i] << "|";
	std::cout << std::endl;
	std::cout << "Elements of test5: |";
	for (unsigned int i = 0; i < test5.size(); i++)
		std::cout << test5[i] << "|";
	std::cout << std::endl;
	//------------------------------------------------
	std::cout << "----------------Test constructor copy----------------" << std::endl;
	Array<int> test7(test5);
	std::cout << "Elements of test7 after (): |";
	for (unsigned int i = 0; i < test7.size(); i++)
		std::cout << test7[i] << "|";
	for (unsigned int i = 0; i < test7.size(); i++)
		test7[i] = i + 10;
	std::cout << std::endl;
	std::cout << "Elements of test7 after change: |";
	for (unsigned int i = 0; i < test7.size(); i++)
		std::cout << test7[i] << "|";
	std::cout << std::endl;
	std::cout << "Elements of test5: |";
	for (unsigned int i = 0; i < test5.size(); i++)
		std::cout << test5[i] << "|";
	return 0;
}
