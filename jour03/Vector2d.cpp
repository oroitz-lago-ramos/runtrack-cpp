#include "Vector2d.hpp"
#include <cmath>

Vector2d::Vector2d(double x, double y)
    : x(x), y(y)
{
}

Vector2d::Vector2d()
    : x(0), y(0)
{
}

Vector2d::~Vector2d() {}

void Vector2d::setX(double value)
{
    this->x = value;
}

void Vector2d::setY(double value)
{
    this->y = value;
}

double Vector2d::getX() const
{
    return this->x;
}

double Vector2d::getY() const
{
    return this->y;
}

double Vector2d::getNorm()
{
    return std::sqrt((x * x) + (y * y));
}

Vector2d Vector2d::operator+(const Vector2d &other) const
{
    return Vector2d(x + other.getX(), y + other.getY());
}
Vector2d Vector2d::operator-(const Vector2d &other) const
{
    return Vector2d(x - other.getX(), y - other.getY());
}

double Vector2d::distance(const Vector2d &other) const
{
    double dx = x - other.getX();
    double dy = y - other.getY();
    return std::sqrt((dx * dx) + (dy * dy));
}