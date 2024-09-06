#include "Rectangle.hpp"
#include <iostream>
Rectangle::Rectangle() {}
Rectangle::~Rectangle() {}

void Rectangle::draw()
{
    std::cout << "Je dessine un rectangle" << std::endl;
}