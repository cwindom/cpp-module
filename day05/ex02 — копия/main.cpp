#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main() {
	Bureaucrat Tom("Tom", 1);
	Intern Barry;
	Form *test;
	test = Barry.makeForm("presidential pardon", "house");
	std::cout << *test << std::endl;
	
    return 0;
}
