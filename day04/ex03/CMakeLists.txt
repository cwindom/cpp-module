cmake_minimum_required(VERSION 3.17)
project(ex03)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ex03
        AMateria.cpp
        AMateria.hpp
        Character.cpp
        Character.hpp
        Cure.cpp
        Cure.hpp
        Ice.cpp
        Ice.hpp
        ICharacter.hpp
        IMateriaSource.hpp
        main.cpp
        MateriaSource.cpp
        MateriaSource.hpp)
