// main.cpp
#include <iostream>
#include "enemy.h"

int main()
{
    Enemy *enemies[5] = {
        new Koopa("Kenny", 3),
        new Goomba("Gary", 2),
        new Koopa("Kira", 1),
        new Goomba("Gina", 4),
        new Bowser("Bowser", 10)};

    for (int i = 0; i < 5; i++)
    {
        enemies[i]->talk();
        enemies[i]->attack();

        std::cout << "Lives before damage: "
                  << enemies[i]->getLives()
                  << std::endl;

        enemies[i]->takeDamage(3);

        std::cout << "Lives after damage: "
                  << enemies[i]->getLives()
                  << std::endl;

        enemies[i]->talk();
        enemies[i]->attack();

        std::cout << "------" << std::endl;
    }

    for (int i = 0; i < 5; i++)
    {
        delete enemies[i];
        enemies[i] = nullptr;
    }

    return 0;
}