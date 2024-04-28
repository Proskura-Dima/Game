#ifndef WORLD_H
#define WORLD_H

#include <vector>
#include "stage.h"

class World
{
public:
    World();
private:
    int numberOfStage;
    vector <Stage> plates;
};

#endif // WORLD_H
