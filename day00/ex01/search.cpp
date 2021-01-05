#include "Contact.hpp"

static void printAll(Contact contacts[8], int i)
{
	int tmp = 0;
	std::cout << std::setw(10) << "index" << '|';
	std::cout << std::setw(10) << "first name" << '|';
	std::cout << std::setw(10) << "last name" << '|';
	std::cout << std::setw(10) << "nickname" << '|' << std::endl << std::endl;

	for (int j = 0; j < i; j++)
	{
		tmp = j + 1;
		std::cout << std::setw(10) << tmp << '|';
		if (contacts[j].get_firstName().length() > 9)
			std::cout << std::setw(9) << contacts[j].get_firstName().substr(0, 9) << '.';
		else
			std::cout << std::setw(10) << contacts[j].get_firstName();
		std::cout << '|';
		if (contacts[j].get_lastName().length() > 9)
			std::cout << std::setw(9) << contacts[j].get_lastName().substr(0, 9) << '.';
		else
			std::cout << std::setw(10) << contacts[j].get_lastName();
		std::cout << '|';
		if (contacts[j].get_nickname().length() > 9)
			std::cout << std::setw(9) << contacts[j].get_nickname().substr(0, 9) << '.';
		else
			std::cout << std::setw(10) << contacts[j].get_nickname();
		std::cout << '|' << std::endl;
	}
}

static void printOnRequest(Contact contacts[8], int index)
{
	std::cout << "First name: " << contacts[index - 1].get_firstName()<< std::endl;
	std::cout << "Last name: " << contacts[index - 1].get_lastName() << std::endl;
	std::cout << "Nickname: " << contacts[index - 1].get_nickname() << std::endl;
	std::cout << "Login: " << contacts[index - 1].get_login() << std::endl;
	std::cout << "Postal address: " << contacts[index - 1].get_postalAddress() << std::endl;
	std::cout << "Email address: " << contacts[index - 1].get_emailAddress() << std::endl;
	std::cout << "Phone number: " << contacts[index - 1].get_phoneNumber() << std::endl;
	std::cout << "Birthday date: " << contacts[index - 1].get_birthdayDate() << std::endl;
	std::cout << "Favorite meal: " << contacts[index - 1].get_favoriteMeal() << std::endl;
	std::cout << "Underwear color: " << contacts[index - 1].get_underwearColor() << std::endl;
	std::cout << "Darkest secret: " << contacts[index - 1].get_darkestSecret() << std::endl;
}

void search(Contact contacts[8], int i, int flag)
{
	std::string str;
	int index = 0;
	int p;
	if (!flag)
	{
		std::cout << "There is no contact, sorry" << std::endl;
		std::cout << "Please, enter command: " << std::endl;
		return;
	}
	printAll(contacts, i);
	getline(std::cin, str);
	int scan = std::sscanf( str.c_str(), "%d", &p);
	if (scan == 0 || scan == -1)
	{
		std::cout << "Oh no :( You must enter a digit" << std::endl;
		return ;
	}
	if (p > 8)
		p = 100;
	else
	{
		index = std::stoi(str);
	}
	if (index > 0 && index < 9)
	{
		if (index > i)
		{
			std::cout << "Oh no :( Error search" << std::endl;
			return ;
		}
		else
			printOnRequest(contacts, index);
	}
	else
		std::cout << "Oh no :( Error search" << std::endl;
}
