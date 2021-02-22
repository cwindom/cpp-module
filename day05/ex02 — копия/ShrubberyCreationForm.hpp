//
// Created by Card Windom on 2/18/21.
//

#ifndef EX02_SHRUBBERYCREATIONFORM_HPP
#define EX02_SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm: public Form {
private:
    std::string _target;
    ShrubberyCreationForm();
public:
    ShrubberyCreationForm(std::string target);
    virtual ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &copy);
    ShrubberyCreationForm &operator= (const ShrubberyCreationForm &op);

    virtual void execute(Bureaucrat const & executor) const;
};

std::ostream &operator<< (std::ostream &os, ShrubberyCreationForm const &rhs);

#endif //EX02_SHRUBBERYCREATIONFORM_HPP
