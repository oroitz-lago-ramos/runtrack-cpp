#include <iostream>

int main()
{
    const int numIntegers = 5;

    int integers[numIntegers];

    std::cout << "Veuillez taper cinq entiers : " << std::endl;

    for (int i = 0; i < numIntegers; ++i)
    {
        std::cout << "Entier " << (i + 1) << ": ";
        std::cin >> integers[i];
    }

    std::cout << "Vous avez saisi les entiers suivants : " << std::endl;
    for (int i = 0; i < numIntegers; ++i)
    {
        std::cout << integers[i] << " ";
    }
    std::cout << std::endl;

    float average = 0;
    for (int j = 0; j < numIntegers; j++)
    {
        average += integers[j];
    }
    average /= numIntegers;

    std::cout << "La valeur moyenne de la liste rentree est : " << average << std::endl;

    return 0;
}

// #include <iostream>
// #include <list>

// int main()
// {
//     std::list<int> choiceList;
//     int x;
//     std::cout << "Type a number: ";
//     while (true)
//     {
//         std::cin >> x;
//         if (std::cin.fail())
//         {
//             std::cin.clear();                                                   // Clear the error flag
//             std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore the invalid input
//             break;                                                              // Exit the loop
//         }
//         std::cout << "Your number is: " << x << std::endl;
//         choiceList.push_back(x);
//         std::cout << "Type another number: ";
//     }

//     // Perform operations on the list
//     if (!choiceList.empty())
//     {
//         int sum = 0;
//         for (int num : choiceList)
//         {
//             sum += num;
//         }
//         double average = static_cast<double>(sum) / choiceList.size();
//         std::cout << "The average of the entered numbers is: " << average << std::endl;
//     }
//     else
//     {
//         std::cout << "No valid numbers were entered." << std::endl;
//     }

//     std::cout << "Hey! This is the end" << std::endl;

//     return 0;
// }