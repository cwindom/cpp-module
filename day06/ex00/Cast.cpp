//
// Created by Card Windom on 2/23/21.
//

#include "Cast.hpp"

Cast::Cast() {

}

Cast::~Cast() {

}

Cast::Cast(const Cast &copy) {

}

Cast &Cast::operator=(const Cast op) {
    return *this;
}

void Cast::castToChar(std::string str) {
    std::cout << "char: ";
    int i = 0;
    float num;
    if (str.size() == 3 && str[0] == '\'' && str[2] == '\'')
    {
        num = str[1] - 0;
    }
    else
    {
        while (str[i])
            i++;
        if (str[i-1] == 'f' && str != "+inf" && str != "-inf" && str != "inf")
            str.resize(str.size() - 1);
        std::stringstream s(str);
        s >> num;
    }
    if (num == std::numeric_limits<float>::infinity() || num == -std::numeric_limits<float>::infinity() || isnan(num) || num == std::numeric_limits<double>::infinity() || num == -std::numeric_limits<double>::infinity())
    {
        std::cout << "impossible" << std::endl;
        return;
    }
    if (num < 32 || num > 126)
    {
        std::cout << "not displayable" << std::endl;
        return;
    }
    std::cout << static_cast<char>(num) << std::endl;
}

void Cast::castToInt(std::string str) {
    std::cout << "int: ";
    int i = 0;
    float num;
    if (str.size() == 3 && str[0] == '\'' && str[2] == '\'')
        num = str[1] - 0;
    else
    {
        while (str[i])
            i++;
        if (str[i-1] == 'f' && str != "+inf" && str != "-inf" && str != "inf")
            str.resize(str.size() - 1);
        std::stringstream s(str);
        s >> num;
    }
    if (num == std::numeric_limits<float>::infinity() || num == -std::numeric_limits<float>::infinity() || isnan(num) || num == std::numeric_limits<double>::infinity() || num == -std::numeric_limits<double>::infinity())
    {
        std::cout << "impossible" << std::endl;
        return;
    }
    std::cout << static_cast<int>(num) << std::endl;
}

void Cast::castToFloat(std::string str) {
    std::cout << "float: ";
    int i = 0;
    float num;
    if (str.size() == 3 && str[0] == '\'' && str[2] == '\'')
        num = str[1] - 0;
    else
    {
        while (str[i])
            i++;
        if (str[i-1] == 'f' && str != "+inf" && str != "-inf" && str != "inf")
            str.resize(str.size() - 1);
        std::stringstream s(str);
        s >> num;
    }
    std::cout << std::fixed << std::setprecision(1) << static_cast<float>(num) << "f" << std::endl;
}

void Cast::castToDouble(std::string str) {
    std::cout << "double: ";
    int i = 0;
    float num;
    if (str.size() == 3 && str[0] == '\'' && str[2] == '\'')
        num = str[1] - 0;
    else
    {
        while (str[i])
            i++;
        if (str[i-1] == 'f' && str != "+inf" && str != "-inf" && str != "inf")
            str.resize(str.size() - 1);
        std::stringstream s(str);
        s >> num;
    }
    std::cout << std::fixed << std::setprecision(1) << static_cast<double>(num) << std::endl;
}

float Cast::toCast(std::string str) {
    int i = 0;
    float num;
    while (str[i])
        i++;
    if (str[i-1] == 'f' && str != "+inf" && str != "-inf" && str != "inf")
        str.resize(str.size() - 1);
    std::stringstream s(str);
    s >> num;
    return num;
}

const char *Cast::ImpossibleException::what() const throw() {
    return "impossible";
}
