#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H

#include "Circle.hpp"
#include "Rectangle.hpp"

#include <string>
#include <memory>

class ShapeFactory
{
public:
    template <typename T>
    static std::unique_ptr<T> createShape()
    {
        static_assert(std::is_base_of<Shape, T>::value, "T must derive from Shape");
        return std::make_unique<T>();
    }
};

#endif