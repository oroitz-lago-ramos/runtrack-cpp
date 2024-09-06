#include <iostream>

int doubleArray(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        *(arr + i) *= 2;
        sum += *(arr + i);
    }
    return sum;
}

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << *(arr + i) << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = doubleArray(arr, size);
    std::cout << "Sum of doubled elements: " << sum << std::endl;

    std::cout << "Doubled array elements: ";
    printArray(arr, size);

    return 0;
}