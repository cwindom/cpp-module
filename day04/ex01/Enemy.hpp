//
// Created by Мария Корогодова on 25.01.2021.
//

#ifndef EX01_ENEMY_HPP
#define EX01_ENEMY_HPP

#include <iostream>

class Enemy
{
protected:
	int _hitPoints;
	std::string _type;
public:
	Enemy();
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();
	Enemy(Enemy const &copy);
	Enemy &operator= (Enemy const &copy);

	std::string getType() const;
	int getHP() const;
	virtual void takeDamage(int dmg);
};


#endif //EX01_ENEMY_HPP
