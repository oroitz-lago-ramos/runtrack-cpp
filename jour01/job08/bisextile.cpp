#include <iostream>

int main()
{
    int year;
    std::cout << "Enter a year : ";
    std::cin >> year;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        std::cout << "The entered year is bisextile";
    }
    else 
    {
        std::cout << "The entered year is not bisextile";
    }
    return 0;
}