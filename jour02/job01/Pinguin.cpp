#include "Pinguin.hpp"

#include <iostream>

Pinguin::Pinguin(double vitesseNage, double vitesseMarche)
:Aquatique(vitesseNage), Terrestre(vitesseMarche)
{
    
}

Pinguin::~Pinguin(){}

void Pinguin::sePresenter()
{
    std::cout << "Je suis un penguin qui nage à " << this->getVitesseNage() << " m/s et marche à " << this->getVitesseMarche() << " m/s" << std::endl;
}

void Pinguin::nage() 
{
    std::cout << "Je nage OKLM" << std::endl;
}

void Pinguin::marche()
{
    std::cout << "Je marche mais JPP je suis KO" << std::endl;
}

