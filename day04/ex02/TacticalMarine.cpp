//
// Created by Card Windom on 1/26/21.
//

#include "TacticalMarine.hpp"
#include "ISpaceMarine.hpp"

TacticalMarine::TacticalMarine() {
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine() {
    std::cout << "Aaargh..." << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &copy) {

}

TacticalMarine &TacticalMarine::operator=(const TacticalMarine &copy) {

}

ISpaceMarine *TacticalMarine::clone() const {
    return NULL;
}

void TacticalMarine::battleCry() const {
    std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const {
    std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const {
    std::cout << "* attacks with a chainsword *" << std::endl;
}
