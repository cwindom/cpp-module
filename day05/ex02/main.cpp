#include <iostream>
#include "Bureaucrat.hpp"
//#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    Bureaucrat Carl("Carl", 1);
    //check for exception
    //Bureaucrat Carl("Carl", 150);
    PresidentialPardonForm house("house");

    std::cout << "----------------------------------------\n";
    std::cout << "Check function execute for PresidentialPardonForm: " << std::endl;
    std::cout << "Form isSigned before: " << house.get_isSigned() << std::endl;
    Carl.executeForm(house);
    std::cout << "Carl can sign form: ";
    Carl.signForm(house);
    std::cout << "Form isSigned after: " << house.get_isSigned() << std::endl;
    std::cout << "Check function execute after sign: ";
    Carl.executeForm(house);
    std::cout << "----------------------------------------\n";
    std::cout << "Check function execute RobotomyRequestForm: " << std::endl;
    RobotomyRequestForm pool("pool");
    std::cout << "Form isSigned before: " << pool.get_isSigned() << std::endl;
    Carl.executeForm(pool);
    std::cout << "Carl can sign form: ";
    Carl.signForm(pool);
    std::cout << "Form isSigned after: " << pool.get_isSigned() << std::endl;
    std::cout << "Check function execute after sign: ";
    Carl.executeForm(pool);
    std::cout << "----------------------------------------\n";
    std::cout << "Check function execute ShrubberyCreationForm: " << std::endl;
    ShrubberyCreationForm park("park");
    std::cout << "Form isSigned before: " << park.get_isSigned() << std::endl;
    Carl.executeForm(park);
    std::cout << "Carl can sign form: ";
    Carl.signForm(park);
    std::cout << "Form isSigned after: " << park.get_isSigned() << std::endl;
    std::cout << "Check function execute after sign: ";
    Carl.executeForm(park);

    return 0;
}
