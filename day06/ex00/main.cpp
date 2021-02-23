
//char int float double


/*EXAMPLES
./convert 0
char: Non displayable
int: 0
float: 0.0f
double: 0.0
./convert nan
char: impossible
int: impossible
float: nanf
double: nan
./convert 42.0f
char: '*'
int: 42
float: 42.0f
double: 42.0
*/
#include <iostream>
#include <iomanip>
#include <limits>
#include "Cast.hpp"

int main(int ac, char **av) {
    Cast a;
    std::string str = "'*'";
//    std::string str = "inf";
//    std::string str = "-inf";
//    std::string str = "+inf";
//    std::string str = "inff";
//    std::string str = "-inff";
//    std::string str = "+inff";
//    std::string str = "nan";
//    std::string str = "nanf";
    a.castToChar(str);
    a.castToInt(str);
    a.castToFloat(str);
    a.castToDouble(str);
//    if (ac == 2)
//    {
//
//    }
//    else
//        std::cout << "error, must be one argument" << std::endl;
    return 0;
}
