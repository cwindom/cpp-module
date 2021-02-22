//
// Created by Card Windom on 2/18/21.
//

#include "Form.hpp"

Form::Form(const std::string name, const int gradeSign, const int gradeExec): _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec), _isSigned(false)
{
    if (this->_gradeSign > 150 || this->_gradeExec > 150)
        throw Form::GradeTooLowException();
    if (this->_gradeSign > 150 || this->_gradeExec > 150)
        throw Form::GradeTooLowException();
}

Form::~Form() {

}

Form::Form(const Form &copy): _name(copy._name), _gradeSign(copy._gradeSign), _gradeExec(copy._gradeExec), _isSigned(copy._isSigned) {
    if (this->_gradeExec < 1 || this->_gradeSign < 1)
        throw Form::GradeTooHighException();
    if (this->_gradeExec > 150 || this->_gradeSign > 150)
        throw Form::GradeTooLowException();
}

Form &Form::operator=(const Form &op) {
    if (this != &op)
        this->_isSigned = op._isSigned;
    return *this;
}

int Form::get_gradeSign() const {
    return this->_gradeSign;
}

int Form::get_gradeExec() const {
    return this->_gradeExec;
}

std::string Form::get_name() const {
    return this->_name;
}

bool Form::get_isSigned() const {
    return this->_isSigned;
}

void Form::beSigned(Bureaucrat &bur){
    if (bur.getGrade() <= this->_gradeSign)
        this->_isSigned = true;
    else
        throw Form::GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw() {
    return "Grade is too HIGH :( ";
}

const char *Form::GradeTooLowException::what() const throw() {
    return "Grade is too LOW :( ";
}

std::ostream &operator<< (std::ostream &os, Form const &rhs)
{
    os << rhs.get_name() << ", form grade required to sign it " << rhs.get_gradeSign() << ", grade required to execute it " << rhs.get_gradeExec() << std::endl;
    return os;
}