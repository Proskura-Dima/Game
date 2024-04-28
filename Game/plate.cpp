#include "plate.h"

Plate::Plate() {}

int Plate::getX() const
{
    return x;
}

void Plate::setX(int newX)
{
    x = newX;
}

objectOnPlate Plate::getObjOnPl() const
{
    return ObjOnPl;
}

void Plate::setObjOnPl(objectOnPlate newObjOnPl)
{
    ObjOnPl = newObjOnPl;
}
