//
// Created by Мария Корогодова on 22.02.2021.
//

#include "Intern.hpp"

Form *Intern::makeShruberyCreation(std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form *Intern::makeRobotomyRequest(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form *Intern::makePresidentalPardon(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string formType, std::string target)
{
	for (int i = 0; i < 3; i++)
	{
		if(this->_names[i] == formType)
		{
			return (this->*_make[i])(target);
		}
	}
	return NULL;
}

Intern::Intern()
{
	this->_names[0] = "shrubbery creation";
	this->_names[1] = "robotomy request";
	this->_names[2] = "presidential pardon";
	this->_make[0] = &Intern::makeShruberyCreation;
	this->_make[1] = &Intern::makeRobotomyRequest;
	this->_make[2] = &Intern::makePresidentalPardon;
}

Intern::~Intern()
{

}
