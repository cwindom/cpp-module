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
    bool                _isSigned;
    const int           _gradeSign;
    const int           _gradeExec;
public:
    Form();
    Form(std::string const name, int const gradeSign, int const gradeExec);
    virtual ~Form();
    Form(const Form &copy);
    Form &operator= (const Form &op);
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

    virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<< (std::ostream &os, Form const &rhs);

#endif //EX01_FORM_HPP
