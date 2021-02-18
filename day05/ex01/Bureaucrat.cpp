//
// Created by Мария Корогодова on 16.02.2021.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): _name(copy._name), _grade(copy._grade)
{
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &op)
{
    if (this != &op)
        this->_grade = op._grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{

}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

std::string Bureaucrat::getName() const
{
	return this->_name;
}

void Bureaucrat::incrementGrade()
{
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form &f) {
    if(f.get_isSigned())
    {
        std::cout << this->_name << " cannot sign " << f.get_name() << " because isSigned is " << f.get_isSigned() << std::endl;
        return;
    }

    try
    {
        f.beSigned(*this);
        std::cout << this->_name << " signs " << f.get_name() << std::endl;
    }
    catch(std::exception const &e)
    {
        std::cerr << this->_name << " cannot sign " << f.get_name() << " because "<< e.what() << std::endl;
    }
}


const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Oh no, grade is too HIGHT :( ";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Oh no, grade is too LOW :( ";
}

std::ostream &operator<< (std::ostream &os, Bureaucrat const &rhs)
{
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return os;
}