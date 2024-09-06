#include "Pinguin.hpp"

#include <iostream>
#include <algorithm>

std::vector<std::shared_ptr<Pinguin>> Pinguin::colonie;
// std::vector<Pinguin *> Pinguin::colonie;

Pinguin::Pinguin(double vitesseNage, double vitesseMarche)
    : Aquatique(vitesseNage), Terrestre(vitesseMarche)
{
    // colonie.push_back(shared_from_this());
    // colonie.push_back(this);
}

Pinguin::Pinguin(const Pinguin &autre, double vitesseGlisse)
    : Aquatique(autre.getVitesseNage()), Terrestre(autre.getVitesseMarche()), vitesseGlisse(vitesseGlisse)
{
    // colonie.push_back(shared_from_this());
    // colonie.push_back(this);
}

Pinguin::~Pinguin()
{
   auto it = std::remove_if(colonie.begin(), colonie.end(),
                             [this](const std::shared_ptr<Pinguin> &p)
                             { return p.get() == this; });
    colonie.erase(it, colonie.end());
}

std::shared_ptr<Pinguin> Pinguin::creer(double vitesseNage, double vitesseMarche)
{
    auto pingouin = std::shared_ptr<Pinguin>(new Pinguin(vitesseNage, vitesseMarche));
    colonie.push_back(pingouin);
    return pingouin;
}

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

double Pinguin::getVitesseGlisse() const
{
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
void Pinguin::afficherColonie()
{
    std::cout << "La colonie de pingouins contient " << colonie.size() << " pingouins." << std::endl;
    for (const auto &p : colonie)
    {
        p->sePresenter();
    }
}
