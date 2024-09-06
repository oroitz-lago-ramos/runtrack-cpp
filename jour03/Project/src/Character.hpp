#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "GameObject.hpp"
#include <string>

class Character : public GameObject
{
private:
    std::string name;
    int lifePoints;
    double speed;
public:
    Character(std::string name, int lifePoints, double x, double y);
    Character(double x, double y);
    Character();
    ~Character();

    void draw() override;
    void update() override;
    bool isAlive();

    //-------G & S ------//
    void setName(std::string name);
    void setLifePoints(int value);

    std::string getName();
    int getLifePoints();
};




#endif