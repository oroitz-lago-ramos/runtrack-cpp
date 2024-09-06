#include "Character.hpp"

Character::Character(std::string name, int lifePoints, double x, double y)
    : GameObject(x, y), name(name), lifePoints(lifePoints), speed(10)
{
}
Character::Character(double x, double y)
    : GameObject(x,y), speed(10)
{
}

Character::Character()
    : GameObject(), speed(10)
{
}

Character::~Character()
{
}

void Character::draw()
{
    DrawRectangle(this->getX() - 15, this->getY() - 15, 30, 30, GREEN);
}

void Character::update()
{
    if (IsKeyDown(KEY_D) && (this->getX() < 800 -15))
        this->setX(this->getX() + (speed));
    if (IsKeyDown(KEY_A) && (this->getX() > 15))
        this->setX(this->getX() - (speed));
    if (IsKeyDown(KEY_W) && (this->getY() > 15))
        this->setY(this->getY() - (speed));
    if (IsKeyDown(KEY_S) && (this->getY() < 600 - 15))
        this->setY(this->getY() + (speed));
}

bool Character::isAlive()
{
    return this->lifePoints > 0 ? true : false;
}

void Character::setName(std::string name)
{
    this->name = name;
}
void Character::setLifePoints(int lifePoints)
{
    this->lifePoints = lifePoints;
}

std::string Character::getName()
{
    return this->name;
}
int Character::getLifePoints()
{
    return this->lifePoints;
}