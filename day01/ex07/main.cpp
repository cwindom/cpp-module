#include <iostream>
#include <fstream>

void ft_error(std::string text, int exitcode)
{
	std::cerr << text << std::endl;
	exit(exitcode);
}

int main(int ac, char **argv)
{
	if (ac != 4)
		ft_error("Error: you should enter three arguments", 1);
	std::string filename = std::string(argv[1]);
	std::string endFile = filename + ".replace";
	std::string s1 = std::string(argv[2]);
	std::string s2 = std::string(argv[3]);
	if (s1 == " " && s2 == " ")
		ft_error("Error: you should enter a string as argument", 1);
	std::ifstream readFrom;
	std::ofstream writeTo;
	readFrom.open(filename);
	if (readFrom.fail())
	{
		readFrom.close();
		ft_error("Error: can't open file to read", 2);
	}
	writeTo.open(endFile);
	if (writeTo.fail())
	{
		writeTo.close();
		ft_error("Error: can't open file to write", 3);
	}
	std::string str;
	while (std::getline(readFrom, str))
	{
		while((str.find(s1) != std::string::npos))
			str = str.replace(str.find(s1), s1.length(), s2);
		writeTo << str;
		if (!readFrom.eof())
			writeTo << std::endl;
	}
	if (!readFrom.eof() && readFrom.fail())
		ft_error("Error: error during copy", 5);
	readFrom.close();
	writeTo.close();
	return 0;
}
