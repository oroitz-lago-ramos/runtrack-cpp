#include <iostream>
#include <limits>

int main()
{
    float priceHT;
    int quantity;
    int tva;
    std::cout << "Enter the price HT in € of the wished product : ";
    while (true)
    {
        std::cin >> priceHT;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a valid float: ";
        }
        else
        {
            break;
        }
    }

    std::cout << "Enter the quantity of the wished product : ";
    while (true)
    {
        std::cin >> quantity;
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

    std::cout << "Enter the tax % : ";
    while (true)
    {
        std::cin >> tva;
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

    float priceTTC = priceHT + (priceHT * (static_cast<float>(tva) / 100));
    
    std::cout << "The price TTC of the entered product is " << priceTTC << " €" << std::endl;
    return 0;
}