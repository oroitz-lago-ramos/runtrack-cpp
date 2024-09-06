#include <iostream>

int main()
{
    int x, y;
    std::cout << std::endl;

    std::cout << "Please enter the first number : ";
    std::cin >> x;
    std::cout << "Please enter the second number : ";
    std::cin >> y;

    std::cout << std::endl;

    std::cout << "The value of the first number x before exchanging is " << x << std::endl;
    std::cout << "The value of the second number y before exchanging is " << y << std::endl;

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    std::cout << std::endl;

    std::cout << "The value of the first number x after exchanging is " << x << std::endl;
    std::cout << "The value of the second number y after exchanging is " << y << std::endl;

    std::cout << std::endl;
    return 0;
    }