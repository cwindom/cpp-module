cmake_minimum_required(VERSION 3.17)
project(ex01)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex01 main.cpp Enemy.cpp Enemy.hpp AWeapon.cpp AWeapon.hpp Character.cpp Character.hpp PlasmaRifle.cpp PlasmaRifle.hpp
        PowerFist.cpp PowerFist.hpp RadScorpion.cpp RadScorpion.hpp SuperMutant.cpp SuperMutant.hpp)