#include "Character.hpp"

Character::Character(std::string name, int lifePoints, double x, double y)
    : GameObject(x, y), name(name), lifePoints(lifePoints)
{
}

Character::Character()
:GameObject()
{
}

Character::~Character()
{
}

void Character::draw()
{

}

void Character::update()
{

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