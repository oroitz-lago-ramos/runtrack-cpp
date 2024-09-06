#include "GameObject.hpp"

GameObject::GameObject(double x, double y)
    : Vector2d(x, y)
{
}

GameObject::GameObject()
    : Vector2d()
{
}

GameObject::~GameObject()
{
}

void GameObject::draw()
{
    DrawRectangle(this->getX() - 15, this->getY() - 15, 30, 30, PURPLE);
}

void GameObject::update()
{
}