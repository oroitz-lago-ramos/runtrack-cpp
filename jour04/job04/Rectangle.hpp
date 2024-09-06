#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.hpp"

class Rectangle : public Shape 
{
private:
    /* data */
public:
    Rectangle(/* args */);
    ~Rectangle();

    void draw() override;
};
#endif