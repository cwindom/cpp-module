#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}
Contact::~Contact(void)
{
	return ;
}

void Contact::set_firstName(std::string input)
{
	this->firstName = input;
}
void Contact::set_lastName(std::string input)
{
	this->lastName = input;
}
void Contact::set_nickname(std::string input)
{
	this->nickname = input;
}
void Contact::set_login(std::string input)
{
	this->login = input;
}
void Contact::set_postalAddress(std::string input)
{
	this->postalAddress = input;
}
void Contact::set_emailAddress(std::string input)
{
	this->emailAddress = input;
}
void Contact::set_phoneNumber(std::string input)
{
	this->phoneNumber = input;
}
void Contact::set_birthdayDate(std::string input)
{
	this->birthdayDate = input;
}
void Contact::set_favoriteMeal(std::string input)
{
	this->favoriteMeal = input;
}
void Contact::set_underwearColor(std::string input)
{
	this->underwearColor = input;
}
void Contact::set_darkestSecret(std::string input)
{
	this->darkestSecret = input;
}
std::string Contact::get_firstName(void)
{
	return (this->firstName);
}
std::string Contact::get_lastName(void)
{
	return (this->lastName);
}
std::string Contact::get_nickname(void)
{
	return (this->nickname);
}
std::string Contact::get_login(void)
{
	return (this->login);
}
std::string Contact::get_postalAddress(void)
{
	return (this->postalAddress);
}
std::string Contact::get_emailAddress(void)
{
	return (this->emailAddress);
}
std::string Contact::get_phoneNumber(void)
{
	return (this->phoneNumber);
}
std::string Contact::get_birthdayDate(void)
{
	return (this->birthdayDate);
}
std::string Contact::get_favoriteMeal(void)
{
	return (this->favoriteMeal);
}
std::string Contact::get_underwearColor(void)
{
	return (this->underwearColor);
}
std::string Contact::get_darkestSecret(void)
{
	return (this->darkestSecret);
}