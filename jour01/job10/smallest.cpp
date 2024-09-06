#include <iostream>

int **findSmallest(int **numberList, int size)
{
    int **smallest = numberList;
    for (int i = 1; i < size; i++)
    {
        if (**smallest > *numberList[i])
        {
            smallest = &numberList[i];
        }
    }
    return smallest;
}

int main()
{
    int a = 9, b = 45, c = 8, d = 95, e = 64, f = 14, g = 2, h = 79;
    int *numbers[] = {&a, &b, &c, &d, &e, &f, &g, &h};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int **smallest = findSmallest(numbers, size);
    std::cout << "The smallest number is: " << **smallest << ". Is located at :  " << *smallest << "The pointer that points to this adress is located at: " << smallest << std::endl;
    std::cout << "The index of the smallest value is: " << smallest - numbers << std::endl;
    return 0;
}