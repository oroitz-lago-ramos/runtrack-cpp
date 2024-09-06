#ifndef PINGUIN_HPP
#define PINGUIN_HPP

#include "Aquatique.hpp"
#include "Terrestre.hpp"
#include <vector>

class Pinguin : public Aquatique, public Terrestre
{
private:
    double vitesseGlisse;
public:
    Pinguin(double vitesseNage, double vitesseMarche);
    Pinguin(const Pinguin &autre, double vitesseGlisse);

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

    std::vector<int> vectors = {0,1,2,3,4,5};
};

#endif