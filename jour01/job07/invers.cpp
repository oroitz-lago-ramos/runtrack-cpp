#include <iostream>
#include <string>

int main() {
    std::string userInput;
    std::cin >> userInput;

    char* left = &userInput[0];
    char* right = &userInput[userInput.size() - 1];

    while (left < right)
    {
        *left ^= *right;
        *right ^= *left;
        *left ^= *right;
        left++;
        right--;
    }
    std::cout << userInput;

    return 0;
}