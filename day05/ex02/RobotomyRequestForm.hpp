//
// Created by Card Windom on 2/18/21.
//

#ifndef EX02_ROBOTOMYREQUESTFORM_HPP
#define EX02_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form {
private:
    std::string _target;
    RobotomyRequestForm();
public:
    RobotomyRequestForm(std::string target);
    virtual ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &copy);
    RobotomyRequestForm &operator= (const RobotomyRequestForm &op);

    virtual void execute(Bureaucrat const & executor) const;
};

std::ostream &operator<< (std::ostream &os, RobotomyRequestForm const &rhs);

#endif //EX02_ROBOTOMYREQUESTFORM_HPP
