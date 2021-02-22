//
// Created by Мария Корогодова on 22.02.2021.
//

#ifndef EX02_INTERN_HPP
#define EX02_INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
	std::string _names[3];
	Form *(Intern::*_make[3])(std::string target);
	Form *makeShruberyCreation(std::string target);
	Form *makeRobotomyRequest(std::string target);
	Form *makePresidentalPardon(std::string target);
public:
	Intern();
	~Intern();
	Form *makeForm(std::string formType, std::string target);
};


#endif //EX02_INTERN_HPP
