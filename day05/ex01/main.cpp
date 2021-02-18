#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

int main() {
    Bureaucrat Carl("Carl", 21);
    Form Registry("Registry", 22, 12);
    std::cout << "Check operator<< for Form: ";
    std::cout << Registry << std::endl;
    std::cout << "----------------------------------------\n";
    std::cout << "Check function signForm: " << std::endl;
    std::cout << "Form isSigned before: " << Registry.get_isSigned() << std::endl;
    Carl.signForm(Registry);
    std::cout << "Form isSigned after: " << Registry.get_isSigned() << std::endl;
    std::cout << "----------------------------------------\n";
    std::cout << "Check if Form is signed yet: " << std::endl;
    std::cout << "Form isSigned before: " << Registry.get_isSigned() << std::endl;
    Carl.signForm(Registry);
    std::cout << "----------------------------------------\n";
    Bureaucrat Harry("Harry", 121);
    std::cout << Harry;
    Form Pay("Pay", 2, 21);
    Harry.signForm(Pay);
    std::cout << "----------------------------------------\n";
    std::cout << "Try create form with too low gradeSign " << std::endl;
    try
    {
        Form Low("Low", 152, 1);
    }
    catch (std::exception const &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
