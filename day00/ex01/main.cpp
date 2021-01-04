#include "Contact.hpp"

int main()
{
	Contact contacts[8];
	std::string input_command;
	int i = 0;
	int flag = 0;
	std::cout << "You can enter ADD command, SEARCH command or EXIT command"<< std::endl;
	while (true)
	{
		if (!getline(std::cin, input_command, '\n'))
			break;
		if (input_command == "ADD")
		{
			flag = 1;
			if (i < 8)
				contacts[i++] = addNew();
			else
			{
				std::cout << "Unfortunately, there is memory for only eight contacts. Do you want to add one more? In this case, the first contact data will be lost, and the indices of all contacts will be displaced. Enter YES if you are agree" << std::endl;
				if (!getline(std::cin, input_command, '\n'))
					break;
				if (input_command == "YES")
					replaceContact(i, contacts);
				else
					std::cout << "Please, enter command: " << std::endl;
			}
		}
		else if (input_command == "SEARCH")
			search(contacts, i, flag);
		else if (input_command == "EXIT")
			break;
		else if (input_command != "ADD" || input_command != "SEARCH" ||input_command != "EXIT")
			std::cout << "Please, enter command: " << std::endl;
	}
}