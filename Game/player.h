#ifndef PLAYER_H
#define PLAYER_H

#include <vector>

#include "weapon.h"
#include "shield.h"
#include "consumable.h"

class Player
{
public:
    Player();
private:
    int cash;
    int hp;
    int maxhp;
    Weapon weapon;
    Shield shield;
    //vector <Consumable> consumables [3]; ?
};

#endif // PLAYER_H
