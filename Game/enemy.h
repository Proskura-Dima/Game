#ifndef ENEMY_H
#define ENEMY_H

#include <string>

#include "weapon.h"
#include "shield.h"

class Enemy
{
public:
    Enemy();
private:
    int moneyLoot;
    int hp;
    int maxhp;
    int name;
    Weapon weapon;
    Shield shield;
};

#endif // ENEMY_H
