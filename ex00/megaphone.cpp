#include <iostream>
#include "string"
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			int j = 0;
			while (argv[i][j])
			{
				if ( islower((int)argv[i][j]))
					argv[i][j] -= 32;
				std::cout << argv[i][j];
				j++;
			}
		}
		std::cout << std::endl;
	} else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}