#ifndef PINGUIN_HPP
#define PINGUIN_HPP

#include "Aquatique.hpp"
#include "Terrestre.hpp"
#include <vector>
#include <memory>

class Pinguin : public Aquatique, public Terrestre, public std::enable_shared_from_this<Pinguin>
{
private:
    double vitesseGlisse;

public:
    static std::shared_ptr<Pinguin> creer(double vitesseNage, double vitesseMarche);
    static std::vector<std::shared_ptr<Pinguin>> colonie;
    // static std::vector<Pinguin *> colonie;
    Pinguin(double vitesseNage, double vitesseMarche);
    Pinguin(const Pinguin &autre, double vitesseGlisse);
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

    static void afficherColonie();
};

#endif