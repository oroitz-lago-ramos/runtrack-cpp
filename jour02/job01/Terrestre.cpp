#include "Terrestre.hpp"

Terrestre::Terrestre(double vitesseMarche) : vitesseMarche(vitesseMarche) {}
Terrestre::~Terrestre()
{
    // Destructor implementation
}

double Terrestre::getVitesseMarche() const
{
    return this->vitesseMarche;
}

void Terrestre::setVitesseMarche(double vitesse)
{
    this->vitesseMarche = vitesse;
}