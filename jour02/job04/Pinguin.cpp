#include "Pinguin.hpp"
#include <iostream>
#include <algorithm>

std::vector<std::shared_ptr<Pinguin>> Pinguin::colonie;

Pinguin::Pinguin(const std::string &nom, double vitesseNage, double vitesseMarche, double vitesseGlisse)
    : Aquatique(vitesseNage), Terrestre(vitesseMarche), vitesseGlisse(vitesseGlisse), nom(nom)
{
}

std::shared_ptr<Pinguin> Pinguin::creer(const std::string &nom, double vitesseNage, double vitesseMarche, double vitesseGlisse)
{
    auto pingouin = std::shared_ptr<Pinguin>(new Pinguin(nom, vitesseNage, vitesseMarche, vitesseGlisse));
    colonie.push_back(pingouin);
    return pingouin;
}

Pinguin::~Pinguin()
{
    // Eliminar el objeto de la colonia cuando se destruye
    auto it = std::find_if(colonie.begin(), colonie.end(),
                           [this](const std::shared_ptr<Pinguin> &p)
                           { return p.get() == this; });
    if (it != colonie.end())
    {
        colonie.erase(it);
    }
}

void Pinguin::sePresenter()
{
    std::cout << "Je suis un pingouin nommé " << nom << ", je nage à " << this->getVitesseNage() << " m/s, marche à " << this->getVitesseMarche() << " m/s, et glisse à " << this->getVitesseGlisse() << " m/s." << std::endl;
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

double Pinguin::calculerTempsParcours() const
{
    // 15 metros de deslizamiento, 20 metros de marcha, 50 metros de nado, 15 metros más de marcha
    double tempsGlisse = 15 / getVitesseGlisse();
    double tempsMarche1 = 20 / getVitesseMarche();
    double tempsNage = 50 / getVitesseNage();
    double tempsMarche2 = 15 / getVitesseMarche();

    return tempsGlisse + tempsMarche1 + tempsNage + tempsMarche2;
}

void Pinguin::afficherColonie()
{
    std::cout << "La colonie de pingouins contient " << colonie.size() << " pingouins." << std::endl;
    for (const auto &p : colonie)
    {
        p->sePresenter();
    }
}

void Pinguin::afficherTempsParcours()
{
    std::cout << "Temps de parcours pour chaque pingouin:" << std::endl;
    for (const auto &p : colonie)
    {
        std::cout << p->nom << ": " << p->calculerTempsParcours() << " secondes." << std::endl;
    }
}
