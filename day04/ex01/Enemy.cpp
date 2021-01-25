//
// Created by Мария Корогодова on 25.01.2021.
//

#include "Enemy.hpp"

Enemy::Enemy(): _hitPoints(0), _type("default")
{
}

Enemy::Enemy(int hp, const std::string &type): _hitPoints(hp), _type(type)
{
}

Enemy::~Enemy()
{
}

Enemy::Enemy(const Enemy &copy): _hitPoints(copy._hitPoints), _type(copy._type)
{
}

Enemy &Enemy::operator=(const Enemy &copy)
{
	this->_hitPoints = copy._hitPoints;
	this->_type = copy._type;
	return *this;
}

std::string Enemy::getType() const
{
	return this->_type;
}

int Enemy::getHP() const
{
	return this->_hitPoints;
}

void Enemy::takeDamage(int dmg)
{
	this->_hitPoints -= dmg;
}
