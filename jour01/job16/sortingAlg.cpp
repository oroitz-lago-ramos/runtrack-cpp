#include <iostream>
#include <cstring> // Pour strcmp

void MySortString(char *arr[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (strcmp(arr[j], arr[j + 1]) > 0)
            {
                char *temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    char *arr[] = {"pomme", "orange", "banane", "kiwi"};
    int size = sizeof(arr) / sizeof(arr[0]);

    MySortString(arr, size);

    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}