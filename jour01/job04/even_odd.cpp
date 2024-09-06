#include <iostream>
#include <limits>

int main() {
    
    int userInput;
    std::cout << "Please enter an number : ";
    while (true)
    {
        std::cin >> userInput;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a valid integer: ";
        }
        else
        {
            break;
        }
    }
    if (userInput % 2 == 0)
    {
        std::cout << "The number entered is even" << std::endl;
    }
    else
    {
        std::cout << "The number entered is odd" << std::endl;
    }
    return 0;
}