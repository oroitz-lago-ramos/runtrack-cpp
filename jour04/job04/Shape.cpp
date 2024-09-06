#include "Shape.hpp"
#include <iostream>


Shape::Shape(){}

Shape::~Shape(){}

void Shape::draw() 
{
    std::cout << "Je suis juste une forme abstraite" << std::endl;
}