#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
public:
	Contact(void);
	~Contact(void);
	void		set_firstName(std::string);
	void 		set_lastName(std::string);
	void 		set_nickname(std::string);
	void 		set_login(std::string);
	void 		set_postalAddress(std::string);
	void 		set_emailAddress(std::string);
	void 		set_phoneNumber(std::string);
	void 		set_birthdayDate(std::string);
	void 		set_favoriteMeal(std::string);
	void 		set_underwearColor(std::string);
	void 		set_darkestSecret(std::string);
	std::string get_firstName(void);
	std::string get_lastName(void);
	std::string get_nickname(void);
	std::string get_login(void);
	std::string get_postalAddress(void);
	std::string get_emailAddress(void);
	std::string get_phoneNumber(void);
	std::string get_birthdayDate(void);
	std::string get_favoriteMeal(void);
	std::string get_underwearColor(void);
	std::string get_darkestSecret(void);
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _login;
	std::string _postalAddress;
	std::string _emailAddress;
	std::string _phoneNumber;
	std::string _birthdayDate;
	std::string _favoriteMeal;
	std::string _underwearColor;
	std::string _darkestSecret;
};

Contact addNew();
void 	search(Contact contacts[8], int i, int flag);
void	replaceContact(int i, Contact contacts[8]);

#endif