#include "Contact.hpp"
#include <iostream>

//оформить по красоте все что у меня тут есть, вычистить говнокод
//проверить мейкфайл
//проблемы с вводом, бывают косяки типа начали вводить и поставили пробел в
// адд. а второй раз не новая запись а продолжение и возможно это не косяк а
// фишка но придется это доказать
//местами ужасное поведение


Contact addNew()
{
	Contact add;
	std::string input;

	std::cout << "First name: ";
	std::cin >> input;
	add.set_firstName(input);
	std::cout << "Last name: ";
	std::cin >> input;
	add.set_lastName(input);
	std::cout << "Nickname: ";
	std::cin >> input;
	add.set_nickname(input);
	std::cout << "Login: ";
	std::cin >> input;
	add.set_login(input);
	std::cout << "Postal address: ";
	std::cin >> input;
	add.set_postalAddress(input);
	std::cout << "Email address: ";
	std::cin >> input;
	add.set_emailAddress(input);
	std::cout << "Phone number: ";
	std::cin >> input;
	add.set_phoneNumber(input);
	std::cout << "Birthday date: ";
	std::cin >> input;
	add.set_birthdayDate(input);
	std::cout << "Favorite meal: ";
	std::cin >> input;
	add.set_favoriteMeal(input);
	std::cout << "Underwear color: ";
	std::cin >> input;
	add.set_underwearColor(input);
	std::cout << "Darkest secret: ";
	std::cin >> input;
	add.set_darkestSecret(input);
	return (add);
}

void Search(Contact contacts[8], int i)
{
	std::string str;
	int index;
	for (int j = 0; j < i; j++)
	{
		std::cout << std::setw(10) << j + 1 << '|';
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
	getline(std::cin, str);
	index = std::stoi(str);
	if (index > 0 && index < 9)
	{
		if (index > i)
			std::cout << "Error" << std::endl;
		else
		{
			std::cout << "First name: " << contacts[index - 1].get_firstName()
			<< std::endl;
			std::cout << "Last name: " << contacts[index - 1].get_lastName() << std::endl;;
			std::cout << "Nickname: " << contacts[index - 1].get_nickname() << std::endl;;
			std::cout << "Login: " << contacts[index - 1].get_login() << std::endl;;
			std::cout << "Postal address: " << contacts[index - 1].get_postalAddress() << std::endl;;
			std::cout << "Email address: " << contacts[index - 1].get_emailAddress() << std::endl;;
			std::cout << "Phone number: " << contacts[index - 1].get_phoneNumber() << std::endl;;
			std::cout << "Birthday date: " << contacts[index - 1].get_birthdayDate() << std::endl;;
			std::cout << "Favorite meal: " << contacts[index - 1].get_favoriteMeal() << std::endl;;
			std::cout << "Underwear color: " << contacts[index - 1].get_underwearColor() << std::endl;;
			std::cout << "Darkest secret: " << contacts[index - 1].get_darkestSecret() << std::endl;;
		}
	}
	else
		std::cout << "Error search" << std::endl;
}

int main()
{
	setlocale(LC_ALL, "Ru"); //убрать и перевести на английский
	std::string input_command;
	int i = 0;
	Contact contacts[8]; //всего восемь контактов
	//getline(std::cin, input_command, '\n');
	while (true)
	{
		if (!getline(std::cin, input_command, '\n'))
			break;
		if (input_command == "ADD")
		{
			//сделать так чтобы поля можно было не заполнять и пропустить, оставить пробел
			//убрать восьмерку и поставить на ее место глобальную переменную
			// вдруг я захочу больше контактов добавить
			if (i < 8)
			{
				contacts[i] = addNew();
				i++;
			}
			else
				std::cout << "грустное сообщение о том, что место закончилось" << std::endl;
		}
		else if (input_command == "SEARCH")
			Search(contacts, i);
		else if (input_command == "EXIT")
			break;
	}
}