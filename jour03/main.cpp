#include "Vector2d.hpp"
#include <iostream>

int main() 
{
    /*
    Vector2d v1 = Vector2d(45,9)

    */

    Vector2d *v1 = new Vector2d(45,9);
    Vector2d *v2 = new Vector2d(78,65);

    double distance = v1->distance(*v2);


    std::cout << distance << std::endl;

    std::cout << v1->getNorm() << std::endl;
    std::cout << v2->getNorm() << std::endl;

    return 0;

    
}