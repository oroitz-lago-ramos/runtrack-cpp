#include <iostream>
void swapValues(int &x, int &y) 
{
    x ^= y;
    y ^= x;
    x ^= y;
} 

int main()
{   
    int x = 54;
    int y = 6;

    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;

    swapValues(x,y);

    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    
    return 0;
}