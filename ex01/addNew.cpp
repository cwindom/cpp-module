#include "Contact.hpp"

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