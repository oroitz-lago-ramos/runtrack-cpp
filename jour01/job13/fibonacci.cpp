#include <iostream>
#include <cstdint>

constexpr int fibonacci(int n)
{
    return (n <= 1) ? n : (fibonacci(n - 1) + fibonacci(n - 2));
}

void printBits(const uint32_t &n)
{
    for (int i = 31; i >= 0; --i)
    {
        // std::cout << "Test " << (n >> i) << std::endl;
        std::cout << ((n >> i) & 1);
        if (i % 8 == 0)
        {
            std::cout << " "; // Ajouter un espace tous les 8 bits pour la lisibilité
        }
    }
    std::cout << std::endl;
}

bool hasEvenNumberOfOnes(uint32_t &n)
{
    int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
        printBits(n);
    }
    return (count % 2) == 0;
}

int main() 
{
    std::cout << "First ten terms of the Fibonacci sequence:" << std::endl;
    for (int i = 0; i < 10; ++i)
    {
        std::cout << fibonacci(i) << " ";
    }
    std::cout << std::endl;

    uint32_t testNumber = 19;
    printBits(testNumber);

    bool result = hasEvenNumberOfOnes(testNumber);
    std::cout << "The number " << testNumber << " has an even number of 1 bits: " << std::boolalpha << result << std::endl;

    return 0;
}