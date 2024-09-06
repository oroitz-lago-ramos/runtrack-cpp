#include "Circle.hpp"
#include "Rectangle.hpp"
#include <iostream>
#include "ShapeFactory.hpp"

template <typename T, typename... Args>
void drawShape(T *shape1, Args... shapes)
{
    shape1->draw();
    if constexpr (sizeof...(shapes) > 0)
    {
        drawShape(shapes...);
    }
}

int main()
{
    // Utilisation de ShapeFactory pour créer des instances de Shape
    Shape *circle = ShapeFactory::createShape("Circle");
    Shape *rectangle = ShapeFactory::createShape("Rectangle");

    if (circle)
    {
        drawShape(circle); // Dessiner un cercle
        delete circle;     // Libérer la mémoire
    }

    if (rectangle)
    {
        drawShape(rectangle); // Dessiner un rectangle
        delete rectangle;     // Libérer la mémoire
    }

    // Essayons de créer une forme non supportée
    Shape *unknown = ShapeFactory::createShape("Triangle");
    if (!unknown)
    {
        std::cout << "Unknown shape type!" << std::endl;
    }

    return 0;
}