#include "Decor.hpp"

Decor::Decor(double x, double y)
:GameObject(x,y)
{
}
Decor::Decor()
:GameObject()
{
}

Decor::~Decor()
{
}

void Decor::draw()
{
    DrawRectangle(this->getX() - 15, this->getY() - 15, 30, 30, YELLOW);
}