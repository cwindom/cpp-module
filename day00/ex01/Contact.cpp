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
	this->_firstName = input;
}
void Contact::set_lastName(std::string input)
{
	this->_lastName = input;
}
void Contact::set_nickname(std::string input)
{
	this->_nickname = input;
}
void Contact::set_login(std::string input)
{
	this->_login = input;
}
void Contact::set_postalAddress(std::string input)
{
	this->_postalAddress = input;
}
void Contact::set_emailAddress(std::string input)
{
	this->_emailAddress = input;
}
void Contact::set_phoneNumber(std::string input)
{
	this->_phoneNumber = input;
}
void Contact::set_birthdayDate(std::string input)
{
	this->_birthdayDate = input;
}
void Contact::set_favoriteMeal(std::string input)
{
	this->_favoriteMeal = input;
}
void Contact::set_underwearColor(std::string input)
{
	this->_underwearColor = input;
}
void Contact::set_darkestSecret(std::string input)
{
	this->_darkestSecret = input;
}
std::string Contact::get_firstName(void)
{
	return (this->_firstName);
}
std::string Contact::get_lastName(void)
{
	return (this->_lastName);
}
std::string Contact::get_nickname(void)
{
	return (this->_nickname);
}
std::string Contact::get_login(void)
{
	return (this->_login);
}
std::string Contact::get_postalAddress(void)
{
	return (this->_postalAddress);
}
std::string Contact::get_emailAddress(void)
{
	return (this->_emailAddress);
}
std::string Contact::get_phoneNumber(void)
{
	return (this->_phoneNumber);
}
std::string Contact::get_birthdayDate(void)
{
	return (this->_birthdayDate);
}
std::string Contact::get_favoriteMeal(void)
{
	return (this->_favoriteMeal);
}
std::string Contact::get_underwearColor(void)
{
	return (this->_underwearColor);
}
std::string Contact::get_darkestSecret(void)
{
	return (this->_darkestSecret);
}