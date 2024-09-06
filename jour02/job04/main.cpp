#include "Pinguin.hpp"

int main()
{
    auto p1 = Pinguin::creer("Pingouin 1", 1.0, 0.5, 2.0);
    auto p2 = Pinguin::creer("Pingouin 2", 1.5, 0.6, 2.5);

    Pinguin::afficherColonie(); // Mostrar la colonia

    Pinguin::afficherTempsParcours(); // Mostrar el tiempo de recorrido para cada pingüino

    return 0;
}
