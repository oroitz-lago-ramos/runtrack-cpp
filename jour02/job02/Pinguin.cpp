#include "Pinguin.hpp"

#include <iostream>

Pinguin::Pinguin(double vitesseNage, double vitesseMarche)
:Aquatique(vitesseNage), Terrestre(vitesseMarche)
{}

Pinguin::Pinguin(const Pinguin &autre, double vitesseGlisse)
    :Aquatique(autre.getVitesseNage()), Terrestre(autre.getVitesseMarche()), vitesseGlisse(vitesseGlisse) {}

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

void Pinguin::glisse()
{
    std::cout << "YOUHOUUUU!" << std::endl;
}

void Pinguin::setVitesseGlisse(double vitesse)
{
    this->vitesseGlisse = vitesse;
}

double Pinguin::getVitesseGlisse() const {
    return this->vitesseGlisse;
}

void Pinguin::setVitesseNage(double vitesse)
{
    this->Aquatique::setVitesseNage(vitesse);
}

void Pinguin::setVitesseMarche(double vitesse)
{
    this->Terrestre::setVitesseMarche(vitesse);
}

double Pinguin::getVitesseNage() const
{
    return Aquatique::getVitesseNage();
}

double Pinguin::getVitesseMarche() const
{
    return Terrestre::getVitesseMarche();
}
