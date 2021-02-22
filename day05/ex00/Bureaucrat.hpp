//
// Created by Мария Корогодова on 16.02.2021.
//

#ifndef EX00_BUREAUCRAT_HPP
#define EX00_BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
private:
    const std::string _name;
	int _grade;
	Bureaucrat();
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &copy);
	Bureaucrat &operator=(Bureaucrat const &op);
	~Bureaucrat();

	int getGrade() const;
	std::string getName() const;

	void incrementGrade();
	void decrementGrade();

class GradeTooHighException: public std::exception{
	virtual const char* what() const throw();
};
class GradeTooLowException: public std::exception{
	virtual const char* what() const throw();
};

};

std::ostream &operator<< (std::ostream &os, Bureaucrat const &rhs);

#endif //EX00_BUREAUCRAT_HPP
