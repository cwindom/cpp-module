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
	std::cout << "Successfully added!" << std::endl;
	return (add);
}

void replaceContact(int i, Contact contacts[8])
{
	for (int j = 0; j < i - 1; j++)
	{
		contacts[j].set_firstName(contacts[j+1].get_firstName());
		contacts[j].set_lastName(contacts[j+1].get_lastName());
		contacts[j].set_nickname(contacts[j+1].get_nickname());
		contacts[j].set_login(contacts[j+1].get_login());
		contacts[j].set_postalAddress(contacts[j+1].get_postalAddress());
		contacts[j].set_emailAddress(contacts[j+1].get_emailAddress());
		contacts[j].set_phoneNumber(contacts[j+1].get_phoneNumber());
		contacts[j].set_birthdayDate(contacts[j+1].get_birthdayDate());
		contacts[j].set_favoriteMeal(contacts[j+1].get_favoriteMeal());
		contacts[j].set_underwearColor(contacts[j+1].get_underwearColor());
		contacts[j].set_darkestSecret(contacts[j+1].get_darkestSecret());
	}
	contacts[7] = addNew();
}