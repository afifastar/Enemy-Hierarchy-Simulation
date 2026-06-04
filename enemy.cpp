// enemy.cpp
#include "enemy.h"
#include <iostream>
#include <string>

// ----------------- BASE CLASS ENEMY -----------------
Enemy::Enemy(const std::string &name, int lives) : name_(name), lives_(lives){
    if(lives <= 0){
        lives_ = 1;
    }
}

Enemy::~Enemy(){
    std::cout << name_ << " destroyed." << std::endl;
}

void Enemy::takeDamage(int damage){
    if(damage > 0){
        lives_ -= damage;
        if(lives_ <= 0){
            lives_ = 0;
        }
    }
}

int Enemy::getLives() const{
    return lives_;
}

bool Enemy::isDead() const{
    if(lives_ == 0) {
        return true;
    } else {
        return false;
    }
}

// ----------------- DERIVED CLASS KOOPA -----------------
Koopa::Koopa(const std::string &name, int lives) : Enemy(name,lives){}

Koopa::~Koopa(){
    std::cout << "Koopa ";
}

void Koopa::talk() const {
    if(isDead()){
        std::cout << "Enemy " << name_ << " is DEAD" << std::endl;
        return;
    } else{
        std::cout << "Koopa " << name_ << " says 'Grrr...'"
              << std::endl;
    }
}

void Koopa::attack() const {
    if(isDead()){
        std::cout << "Enemy " << name_ << " is DEAD" << std::endl;
        return;
    } else {
        std::cout << "Koopa " << name_
                  << " attacks by kicking its shell!" << std::endl;
    }
}

// ----------------- DERIVED CLASS GOOMBA -----------------
Goomba::Goomba(const std::string &name, int lives) : Enemy(name, lives){}

Goomba::~Goomba(){
    std::cout << "Goomba ";
}

void Goomba::talk() const {
    if(isDead()) {
        std::cout << "Enemy " << name_ << " is DEAD" << std::endl;
        return;
    } else {
        std::cout << "Goomba " << name_ << " says 'Grrr...'"
                  << std::endl;
    }
}

void Goomba::attack() const {
    if(isDead()){
        std::cout << "Enemy " << name_ << " is DEAD" << std::endl;
        return;
    } else {
        std::cout << "Goomba " << name_
                  << " attacks by charging forward!" << std::endl;
    }
}

// ----------------- DERIVED CLASS BOWSER -----------------
Bowser::Bowser(const std::string &name, int lives) : Enemy(name, lives){}

Bowser::~Bowser(){
    std::cout << "Bowser ";
}

void Bowser::talk() const {
    if(isDead()){
        std::cout << "Bowser " << name_ << " is DEAD" << std::endl;
        return;
    } else {
        std::cout << "Bowser " << name_ << " says 'Roar! You cannot defeat me!'" 
                  << std::endl;
    }
}

void Bowser::attack() const {
    if(isDead()){
        std::cout << "Bowser " << name_ << " is DEAD" << std::endl;
        return;
    } else {
        std::cout << "Bowser " << name_ 
                  << " attacks by breathing fire!" << std::endl;
    }
}