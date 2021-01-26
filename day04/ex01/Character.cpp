//
// Created by Мария Корогодова on 25.01.2021.
//

#include "Character.hpp"

Character::Character(): _name("default"), _AP(0), wp(NULL)
{
}

Character::Character(const std::string &name): _name(name), _AP(40), wp(NULL)
{
}

Character::~Character() {

}

Character::Character(const Character &copy): _name(copy._name), _AP(copy._AP), wp(copy.wp)
{
}

Character &Character::operator=(const Character &copy) {
    this->_name = copy._name;
    this->wp = copy.wp;
    this->_AP = copy._AP;
    return *this;
}

void Character::recoverAP() {
    this->_AP += 10;
    if (this->_AP > 40)
        this->_AP = 40;
}

void Character::equip(AWeapon *weapon) {
    this->wp = weapon;
}

void Character::attack(Enemy *enemy)
{
    if (!enemy || !this->wp)
        return;
    this->_AP -= this->wp->getAPCost();
    if (!this->_AP)
        return;
    std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->wp->getName() << std::endl;
    this->wp->attack();
    enemy->takeDamage(this->wp->getDamage());
    if (enemy->getHP() <= 0)
        delete enemy;
}

std::string Character::getName() const {
    return this->_name;
}

AWeapon *Character::getWp() const {
    return this->wp;
}

int Character::getAP() const {
    return this->_AP;
}

std::ostream &operator<<(std::ostream &os, Character const &rhs)
{
    if (rhs.getWp())
        os << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " << rhs.getWp()->getName() << std::endl;
    else
        os << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed" << std::endl;
    return os;
}