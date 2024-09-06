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
    // Utilisation de ShapeFactory pour créer des instances de Shape dérivées
    auto circle = ShapeFactory::createShape<Circle>();
    auto rectangle = ShapeFactory::createShape<Rectangle>();

    // Dessiner les formes
    if (circle)
    {
        circle->draw(); // Dessiner un cercle
    }

    if (rectangle)
    {
        rectangle->draw(); // Dessiner un rectangle
    }

    return 0;
}
