#ifndef VECTOR2D_HPP
#define VECTOR2D_HPP

class Vector2d
{
private:
    double x;
    double y;

public:
    Vector2d(double x, double y);
    Vector2d();
    ~Vector2d();

    //----- G & S-------//
    void setX(double value);
    void setY(double value);

    double getX() const;
    double getY() const;
    double getNorm();

    double distance(const Vector2d &other) const;
    Vector2d operator+(const Vector2d &other) const;
    Vector2d operator-(const Vector2d &other) const;
};

#endif