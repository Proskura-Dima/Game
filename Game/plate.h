#ifndef PLATE_H
#define PLATE_H

enum class objectOnPlate {enemy,chest,shop,nothing};

class Plate
{
public:
    Plate();
    int getX() const;
    void setX(int newX);

    objectOnPlate getObjOnPl() const;
    void setObjOnPl(objectOnPlate newObjOnPl);

private:
    objectOnPlate ObjOnPl;
    int x;
};

#endif // PLATE_H
