#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.hpp"

class Circle : public Shape
{
private:
public:
    Circle(/* args */);
    ~Circle();
    void draw() override;
};


#endif