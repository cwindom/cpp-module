cmake_minimum_required(VERSION 3.17)
project(ex02)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex02 main.cpp
        Bureaucrat.hpp
        Bureaucrat.cpp
        Form.cpp
        Form.hpp
        ShrubberyCreationForm.cpp
        ShrubberyCreationForm.hpp
        RobotomyRequestForm.cpp
        RobotomyRequestForm.hpp
        PresidentialPardonForm.cpp
        PresidentialPardonForm.hpp)