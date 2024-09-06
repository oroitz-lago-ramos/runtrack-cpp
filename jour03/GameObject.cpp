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
}

void GameObject::update()
{
}