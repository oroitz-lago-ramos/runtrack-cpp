#include <iostream>
#include <cmath>

// Ceci est ma version j'ai demandé comment je pourrait l'ameilliorer
// int sumOfCubes(int x, int &y)
// {
//     int sum = 0;
//     for (int i = x; i <= y; i++)
//     {
//         sum += (i *i * i);
//     }
//     return sum;
// }

// int reverseSumOfCubes(int x, int &y)
// {
//     int sum = 0;
//     for (int i = x; i >= y; i--)
//     {
//         sum += (i * i * i);
//     }
//     return sum;
// }


// int main() {
//     int number;

//     std::cout << "Enter a number : ";
//     std::cin >> number;
//     int result;
//     if (number >= 5)
//     {
//         result = sumOfCubes(5, number);
//     }
//     else
//     {
//         result = reverseSumOfCubes(5, number);
//     }
//     std::cout << "Result : " << result << std::endl;

    
// }

int sumOfCubesInRange(int start, int end)
{
    int sum = 0;
    int step = (start <= end) ? 1 : -1;

    for (int i = start; i != end + step; i += step)
    {
        sum += std::pow(i, 3);
    }

    return sum;
}

int main()
{
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (!std::cin)
    {
        std::cerr << "Invalid input! Please enter an integer." << std::endl;
        return 1;
    }

    int result;
    const int start = 5;

    result = sumOfCubesInRange(start, number);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
