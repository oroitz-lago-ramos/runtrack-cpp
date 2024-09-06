#include "Circle.hpp"
#include "Rectangle.hpp"

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
    Shape *rect = new Rectangle();
    Shape *circle = new Circle();

    drawShape(rect, circle);
}