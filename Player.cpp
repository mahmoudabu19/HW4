//
// Created by Mahmoud on 8/1/2024.
//
#include "Player.h"
using namespace std;

string Player::getDescription() const {
    return m_description;
}

string Player::getName() const {
    return m_name;
}

int Player::getLevel() const {
    return m_level;
}

int Player::getForce() const {
    return m_force;
}

int Player::getHealthPoints() const {
    return m_heathPoints;
}

int Player::getCoins() const {
    return m_coins;
}
