#include <iostream>
int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] >= 97 && argv[i][j] <= 123)
					argv[i][j] -= 32;
				std::cout << argv[i][j];
				j++;
			}
			i++;
		}
		std::cout << "\n";
	} else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	}
}