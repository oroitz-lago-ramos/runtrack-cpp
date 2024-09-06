#include "Aquatique.hpp"

Aquatique::Aquatique(double vitesseNage) :vitesseNage(vitesseNage) {}
Aquatique::~Aquatique()
{
    // Destructor implementation
}

double Aquatique::getVitesseNage() const
{
    return this->vitesseNage;
}

void Aquatique::setVitesseNage(double vitesse)
{
    this->vitesseNage = vitesse;
}