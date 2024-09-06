#include <iostream>

#include "Pinguin.hpp"

int main() {
    // std::cout << "Hello";
    // Pinguin *p1 = new Pinguin(5.5,(double)(1));
    // p1->nage();
    // p1->sePresenter();

    // Pinguin* p2 = p1;

    // Pinguin *p3 = new Pinguin(*p1,90);
    // p3->sePresenter();
    // p3->glisse();


    // p1->setVitesseMarche(89.2);

    // // std::cout << p2->getVitesseMarche() << p3->getVitesseMarche();
    // p2->sePresenter();
    // p3->sePresenter();
    // p1->sePresenter();
    // // Pinguin p3 = p2;

    Pinguin p1 = Pinguin(45.0,2.4);
    std::cout << "Deuxieme element de vectors de p1 avant modif " << p1.vectors[1] << " at " << &p1.vectors[1] << std::endl;
    Pinguin p2 = p1;
    std::cout << "Deuxieme element de vectors de p2 avant modif " << p2.vectors[1] << " at " << &p2.vectors[1] << std::endl;

    p1.vectors[1] = 10;
    std::cout << "Deuxieme element de vectors de p1 après modif " << p1.vectors[1] << " at " << &p1.vectors[1] << std::endl;
    std::cout << "Deuxieme element de vectors de p2 après modif " << p2.vectors[1] << " at " << &p2.vectors[1] << std::endl;

    Pinguin p3 = Pinguin(p1, 45);
    Pinguin *p4 = new Pinguin(45.5,35);
    // p1.setVitesseMarche(7985.2);

    // p1.sePresenter();
    // p2.sePresenter();
    // p3.sePresenter();





   

    return 0;
}