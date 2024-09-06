#ifndef PINGUIN_HPP
#define PINGUIN_HPP

#include "Aquatique.hpp"
#include "Terrestre.hpp"
#include <vector>
#include <memory>
#include <string>

class Pinguin : public Aquatique, public Terrestre, public std::enable_shared_from_this<Pinguin>
{
private:
    double vitesseGlisse;
    std::string nom; // Atributo para el nombre del pingüino

    // Constructor privado
    Pinguin(const std::string &nom, double vitesseNage, double vitesseMarche, double vitesseGlisse);

public:
    static std::vector<std::shared_ptr<Pinguin>> colonie;

    // Método estático de fábrica
    static std::shared_ptr<Pinguin> creer(const std::string &nom, double vitesseNage, double vitesseMarche, double vitesseGlisse);

    ~Pinguin();

    void nage() override;
    void marche() override;
    void glisse();
    void sePresenter();

    void setVitesseGlisse(double vitesse);
    double getVitesseGlisse() const;

    void setVitesseNage(double vitesse);
    void setVitesseMarche(double vitesse);

    double getVitesseNage() const;
    double getVitesseMarche() const;

    // Método para calcular el tiempo de recorrido de la pista
    double calculerTempsParcours() const;

    static void afficherColonie();
    static void afficherTempsParcours(); // Método estático para mostrar tiempos de recorrido
};

#endif
