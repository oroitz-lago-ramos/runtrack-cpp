#include <iostream>

// int findSmallest(int *numberList, int size)
// {
//     int smallest = *numberList;
//     for (int i = 1; i < size; i++)
//     {
//         if (smallest > numberList[i])
//         {
//             smallest = numberList[i];
//         }
//     }
//     return smallest;
// }

// int main()
// {
//     int numbers[] = {9, 45, 8, 95, 64, 14, 1, 2, 79};
//     int size = sizeof(numbers) / sizeof(numbers[0]);
//     int smallest = findSmallest(numbers, size);
//     std::cout << "The smallest number is: " << smallest << std::endl;
//     return 0;
// }

int *findSmallest(int *numberList, int size)
{
    int *smallest = numberList;
    for (int i = 1; i < size; i++)
    {
        if (*smallest > numberList[i])
        {
            smallest = &numberList[i];
        }
    }
    return smallest;
}

int main()
{
    int numbers[] = {9, 45, 8, 95, 64, 14, 2, 79};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int *smallest = findSmallest(numbers, size);
    std::cout << "The smallest number is: " << *smallest << ". Is located at :  " << smallest << std::endl;
    std::cout << "The index of the smallest value is: " << smallest - numbers << std::endl;
    return 0;
}
