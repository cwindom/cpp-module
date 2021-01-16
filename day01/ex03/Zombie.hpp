#ifndef EX03_ZOMBIE_HPP
#define EX03_ZOMBIE_HPP

#include <iostream>

class Zombie{
public:
	Zombie();
	Zombie(std::string name, std::string type);
	~Zombie();
	void announce();
	std::string get_name(void);
	std::string get_type(void);
	void set_name(std::string);
	void set_type(std::string);
private:
	std::string _name;
	std::string _type;
};


#endif
