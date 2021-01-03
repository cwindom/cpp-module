#include "Contact.hpp"

int main()
{
	std::string input_command;
	int i = 0;
	Contact contacts[8];
	std::cout << "you can enter ADD command, SEARCH command or EXIT command" << std::endl;
	while (true)
	{
		if (!getline(std::cin, input_command, '\n'))
			break;
		if (input_command == "ADD")
		{
			if (i < 8)
			{
				contacts[i] = addNew();
				i++;
			}
			else
				std::cout << "Oh no :( Free space is out. But you can try SEARCH or EXIT" << std::endl;
		}
		else if (input_command == "SEARCH")
			search(contacts, i);
		else if (input_command == "EXIT")
			break;
	}
}