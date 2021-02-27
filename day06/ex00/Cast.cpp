//
// Created by Card Windom on 2/23/21.
//

#include "Cast.hpp"

Cast::Cast() {

}

Cast::~Cast() {

}

Cast::Cast(const Cast &copy) {
    (void)&copy;
}

Cast &Cast::operator=(const Cast op) {
    (void)op;
    return *this;
}

void Cast::castToChar(std::string str) {
    std::cout << "char: ";
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
    if (num < 0 || num > 127 || num == std::numeric_limits<float>::infinity() || num == -std::numeric_limits<float>::infinity() || isnan(num) || num == std::numeric_limits<double>::infinity() || num == -std::numeric_limits<double>::infinity())
    {
        std::cout << "impossible" << std::endl;
        return;
    }
    if (num < 32 || num > 126)
    {
        std::cout << "not displayable" << std::endl;
        return;
    }
    std::cout << "'" << static_cast<char>(num) << "'" << std::endl;
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

void Cast::checkArgv(std::string str) {
    int flag = 0;
    if (str == "+inf" || str == "-inf" || str == "inf" || str == "+inff" || str == "-inff" || str == "nan" || str == "nanf" || str == "inff")
        return;
    if (str.length() == 1 && !isdigit(str[0]))
    {
        std::cout << "Invalid arguments\n";
        exit(-1);
    }
    for (unsigned long i = 0; i < str.length(); i++)
    {
        if (!isdigit(str[i]) && str[i] != '.' && str[i] != 'f')
            flag = 1;
        if (str[i] == 'f' && str[++i] != '\0')
        {
            flag = 1;

        }
        if (i == 0 && str[i] == '-')
            flag = 0;
        if (str[i] == '.')
            flag = 0;
    }
    if (str.length() == 3 && str[0] == '\'' && str[2] == '\'')
        flag = 0;
    if (flag)
    {
        std::cout << "Invalid arguments\n";
        exit(-1);
    }
}
