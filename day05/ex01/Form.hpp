//
// Created by Card Windom on 2/18/21.
//

#ifndef EX01_FORM_HPP
#define EX01_FORM_HPP

#include <iostream>
class Form;
#include "Bureaucrat.hpp"

class Form {
private:
    const std::string   _name;
    const int           _gradeSign;
    const int           _gradeExec;
    bool                _isSigned;
public:
    //Coplien
    Form();
    Form(std::string const name, int const gradeSign, int const gradeExec);
    virtual ~Form();
    Form(const Form &copy);
    Form &operator= (const Form &op);
    //getters
    int         get_gradeSign() const;
    int         get_gradeExec() const;
    std::string get_name() const;
    bool        get_isSigned() const;

    void        beSigned(Bureaucrat &bur);

    class GradeTooHighException: public std::exception{
        virtual const char* what() const throw();
    };
    class GradeTooLowException: public std::exception{
        virtual const char* what() const throw();
    };
};

std::ostream &operator<< (std::ostream &os, Form const &rhs);

#endif //EX01_FORM_HPP
