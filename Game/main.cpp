#include <QCoreApplication>

using namespace std;

srand(time(0));
/*struct World{
    int seed;
};
World world();*/

class SceneObject{
public:
    void set_x(int X){
        x=X;
    }
    int get_x(){
        return x;
    }
private:
    int x;
};
class Field::SceneObject  {

};

class Entity::SceneObject{
private:
    Weapon wep();
    Shield shield();
    int hp;
    int maxhp;
};
class Player::Entity{
private:
    int amountOfMoney;
};
class Enemy::Entity{
    int cashLoot;
};
class Item {
private:
    int price;
};
class Weapon::Item {
private:
    int damage;
};
class Shield::Item {
private:
    int degreeOfProtection;
};
class Box::SceneObject{
private:
    Item item;
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug()<<"Hello world";
    return a.exec();
}
