//
// Created by Card Windom on 2/18/21.
//

#ifndef EX02_PRESIDENTIALPARDONFORM_HPP
#define EX02_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form {
private:
    std::string _target;
    PresidentialPardonForm();
public:
    PresidentialPardonForm(std::string target);
    virtual ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &copy);
    PresidentialPardonForm &operator= (const PresidentialPardonForm &op);

    virtual void execute(Bureaucrat const & executor) const;
};

std::ostream &operator<< (std::ostream &os, PresidentialPardonForm const &rhs);

#endif //EX02_PRESIDENTIALPARDONFORM_HPP
