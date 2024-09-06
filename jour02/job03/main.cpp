#include "Pinguin.hpp"

int main()
{
    {
        auto p1 = Pinguin::creer(1.0, 0.5);
        auto p2 = Pinguin::creer(1.5, 0.6);

        Pinguin::afficherColonie();
    }

    Pinguin::afficherColonie(); 

    return 0;
}
