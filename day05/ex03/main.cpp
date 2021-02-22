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
	//check if name form is not exist
	Form *test1;
	try
    {
        test1 = Barry.makeForm("blablabla", "bla");
    }
	catch (std::exception const &e)
    {
	    std::cerr << e.what() << std::endl;
    }

    return 0;
}
