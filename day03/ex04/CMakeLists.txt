cmake_minimum_required(VERSION 3.17)
project(ex04)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex04 main.cpp SuperTrap.cpp SuperTrap.hpp
        ClapTrap.cpp ClapTrap.hpp FragTrap.cpp FragTrap.hpp
        NinjaTrap.cpp NinjaTrap.hpp ScavTrap.cpp ScavTrap.hpp)