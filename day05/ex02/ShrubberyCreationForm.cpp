//
// Created by Card Windom on 2/18/21.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137) {
    this->_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy): Form("ShrubberyCreationForm", 145, 137) {
    this->_target = copy._target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &op) {
    if (this != &op)
        this->_target = op._target;
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    if (executor.getGrade() > this->get_gradeExec())
    {
        throw Form::GradeTooLowException();
        return;
    }
    std::string name = this->_target + "_shrubbery";
    std::ofstream out(name);
    if (out.is_open())
    {
        out << "         * \n"
               "        /|\\                  \n"
               "       /*|*\\\n"
               "      /*/|\\*\\\n"
               "     /*/X|X\\*\\\n"
               "    /*/X/|\\X\\*\\\n"
               "   /*/X/*|*\\X\\*\\             \n"
               "  /*/X/*/|\\*\\X\\*\\\n"
               " /*/X/*/X|X\\*\\X\\*\\\n"
               "/*/X/*/X/|\\X\\*\\X\\*\\\n"
               "        |X|      \n"
               "        |X|    ";
        out.close();
    }
    else
        std::cerr << "Cant write:( " << std::endl;
}

std::ostream &operator<< (std::ostream &os, ShrubberyCreationForm const &rhs)
{
    os << rhs.get_name() << ", form grade required to sign it " << rhs.get_gradeSign() << ", grade required to execute it " << rhs.get_gradeExec() << std::endl;
    return os;
}