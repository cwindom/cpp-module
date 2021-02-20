//
// Created by Card Windom on 2/18/21.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45) {
    this->_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm() {

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy): Form("RobotomyRequestForm", 72, 45) {
    this->_target = copy._target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &op) {
    if (this != &op)
        this->_target = op._target;
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    if (executor.getGrade() > this->get_gradeExec())
    {
        throw Form::GradeTooLowException();
        return;
    }
    std::cout << "Drrrr drrr drr drr drr..." << std::endl;
    std::srand(std::time(nullptr));
    int r = std::rand() % 2;
    if (r)
        std::cout << this->_target << " has been robotomized successfully" << std::endl;
    else
        std::cout << "FAIL! " << this->_target << " has not been robotomized:(" << std::endl;
}

std::ostream &operator<< (std::ostream &os, RobotomyRequestForm const &rhs)
{
    os << rhs.get_name() << ", form grade required to sign it " << rhs.get_gradeSign() << ", grade required to execute it " << rhs.get_gradeExec() << std::endl;
    return os;
}