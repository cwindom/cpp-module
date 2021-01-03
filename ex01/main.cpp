#include "Contact.hpp"
#include <iostream>

using namespace std; //убрать!!!!!!!
//сделать вывод записи по индексу
//оформить по красоте все что у меня тут есть, вычистить говнокод
//проверить мейкфайл
//проверить разные странные поведения
//добавить проверку как минимум на то, что будет если данные о контакте ввели
// не все. он должен отобразиться? вроде нет


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

void Search(int amount, Contact a)
{
	for (int i = 0; i < amount; i++)
	{
		std::cout << a.get_firstName() << a.get_lastName() << a.get_nickname();
	}
}

int main()
{
	setlocale(LC_ALL, "Ru");
	std::string input_command;
	int i = 0;
	Contact contacts[8]; //всего восемь контактов
	Contact add;
	std::string input;
	//getline(std::cin, input_command, '\n');
	while (true)
	{
		if (!getline(std::cin, input_command, '\n'))
			break;
		if (input_command == "ADD")
		{
			//сделать так чтобы поля можно было не заполнять и пропустить и
			// оставить пробел
			//убрать восьмерку и поставить на ее место глобальную переменную
			// например
			if (i < 8)
			{
				contacts[i] = addNew();
				i++;
				//добавить контакт
			}
			else
				std::cout << "грустное сообщение о том, что место закончилось" << std::endl;
		}
		else if (input_command == "SEARCH")
		{
			//сделать одну функцию и положить ее сюда вместо этих
			// нагромождений. substr поможет?
			for (int j = 0; j < i; j++)
			{
				//обрезать строку и поставить последний отображаемый символ '.'
				std::cout << '|' << std::setw(10) << j << '|' << std::setw
				(10) << contacts[j].get_firstName()  << '|' << std::setw(10)
				<< contacts[j].get_lastName() << '|' << std::setw(10) <<
				contacts[j].get_nickname() << '|' << std::endl;
			}

		}
		else if (input_command == "EXIT")
		{
			std::cout << "it is exit" << std::endl;
			break;
		}

	}
}