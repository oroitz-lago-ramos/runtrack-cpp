#include <iostream>

// Fonction template variadic pour plusieurs arguments
template <typename T, typename... Args>
void print(const T &first, const Args &...rest)
{
    std::cout << first; // Imprimer le premier argument

    if constexpr (sizeof...(rest) > 0)
    {
        std::cout << ", "; // Ajouter une virgule si des arguments restent
        print(rest...);    // Appel récursif pour le reste des arguments
    }
    else
    {
        std::cout << std::endl;
    }
}

int main() {
    print(1, 2.5, "hello", 'A', std::string("world"));
    // Output: 1, 2.5, hello, A, world

    print("Single argument example");
    // Output: Single argument example

    return 0;
}