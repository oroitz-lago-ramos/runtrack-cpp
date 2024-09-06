#include <iostream>

template <typename T>
T max(T a, T b)
{
    return a > b ? a : b;
}

int main()
{
    int a = 4;
    int b = 9;

    double x = 45.58;
    double y = 0.4875;

    std::cout << "A contient " << a << " et B contient " << b << std::endl;
    std::cout << "Le max est donc " << max(a, b) << std::endl;

    std::cout << "X contient " << x << " et Y contient " << y << std::endl;
    std::cout << "Le max est donc " << max(x, y) << std::endl;
}