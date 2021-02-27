
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
//    a.castToChar(str);
//    a.castToInt(str);
//    a.castToFloat(str);
//    a.castToDouble(str);
    if (ac == 2)
    {
        Cast a;
        a.checkArgv(av[1]);
        a.castToChar(av[1]);
        a.castToInt(av[1]);
        a.castToFloat(av[1]);
        a.castToDouble(av[1]);
    }
    else
        std::cout << "error, must be one argument" << std::endl;
    return 0;
}
