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
    Form *test1;
    test1 = Barry.makeForm("robotomy request", "house");
    std::cout << *test1 << std::endl;
    Form *test2;
    test2 = Barry.makeForm("shrubbery creation", "house");
    std::cout << *test2 << std::endl;
    std::cout << "----------------------------------\n";
    Tom.signForm(*test);
    Tom.executeForm(*test);
    std::cout << "----------------------------------\n";
    Tom.signForm(*test1);
    Tom.executeForm(*test1);
    std::cout << "----------------------------------\n";
    Tom.signForm(*test2);
    Tom.executeForm(*test2);
    std::cout << "----------------------------------\n";
	//check if name form is not exist
	Form *test3;
	try
    {
        test3 = Barry.makeForm("blablabla", "bla");
    }
	catch (std::exception const &e)
    {
	    std::cerr << e.what() << std::endl;
    }
    return 0;
}
