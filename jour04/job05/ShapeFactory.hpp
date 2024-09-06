#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H

#include "Circle.hpp"
#include "Rectangle.hpp"

#include <string>

class ShapeFactory
{
public:
    static Shape *createShape(const std::string &shapeType)
    {
        if (shapeType == "Circle")
        {
            return new Circle();
        }
        else if (shapeType == "Rectangle")
        {
            return new Rectangle();
        }
        else
        {
            return nullptr;
        }
    }
};

#endif