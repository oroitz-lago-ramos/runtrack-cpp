#include "Aquatique.hpp"

Aquatique::Aquatique(double vitesseNage) :vitesseNage(vitesseNage) {}

double Aquatique::getVitesseNage() const
{
    return this->vitesseNage;
}

void Aquatique::setVitesseNage(double vitesse)
{
    this->vitesseNage = vitesse;
}