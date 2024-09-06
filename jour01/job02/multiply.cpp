#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 3)
    { 
        std::cout << "Error, please enter two integers to multiply" << std::endl;
        return 0;
    }

    // std::cout << "argc: " << argc << std::endl;
    // for (int i = 0; i < argc; ++i)
    // {
    //     std::cout << "argv[" << i << "]: " << argv[i] << " (address: " << static_cast<void *>(argv[i]) << ")" << std::endl;
    // }

    int num1 = std::atoi(argv[1]);
    int num2 = std::atoi(argv[2]);
    int result = num1 * num2;

    std::cout << "The result of " << num1 << " * " << num2 << " is " << result << std::endl;

    return 0;
}