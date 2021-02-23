//
// Created by Card Windom on 2/23/21.
//

#ifndef EX00_CAST_HPP
#define EX00_CAST_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <limits>
#include <math.h>

class Cast {
public:
    //Coplien
    Cast();
    ~Cast();
    Cast(Cast const &copy);
    Cast &operator= (Cast const op);

    float toCast(std::string str);
    void castToChar(float num);
    void castToInt(float num);
    void castToFloat(float num);
    void castToDouble(float num);
    class ImpossibleException: public std::exception{
        virtual const char* what() const throw();
    };
};


#endif //EX00_CAST_HPP
