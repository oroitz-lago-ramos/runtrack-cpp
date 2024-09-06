#include <iostream>
int countOnes(int number)
{
    int count = 0;
    while (number)
    {
        count += number & 1;
        number >>= 1;
    }

    return count;
}

bool hasEvenNumberOfOnes(int number)
{
    return !(countOnes(number) & 1);
}

void printBits(int n)
{
    for (int i = sizeof(int) * 8 - 1; i >= 0; --i)
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

int main()
{
    int number = 35;
    bool result = hasEvenNumberOfOnes(number);

    printBits(number);
    std::cout << std::boolalpha << result << std::endl;
}