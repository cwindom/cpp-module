//
// Created by Card Windom on 2/18/21.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5) {
    this->_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm() {

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): Form("PresidentialPardonForm", 25, 5) {
    this->_target = copy._target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &op) {
    if (this != &op)
        this->_target = op._target;
    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    if (executor.getGrade() > this->get_gradeExec())
    {
        throw Form::GradeTooLowException();
        return;
    }
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

std::ostream &operator<< (std::ostream &os, PresidentialPardonForm const &rhs)
{
    os << rhs.get_name() << ", form grade required to sign it " << rhs.get_gradeSign() << ", grade required to execute it " << rhs.get_gradeExec() << std::endl;
    return os;
}
