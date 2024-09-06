#ifndef PINGUIN_HPP
#define PINGUIN_HPP

#include "Aquatique.hpp"
#include "Terrestre.hpp"

class Pinguin : public Aquatique, public Terrestre
{
public:
    Pinguin(double vitesseNage, double vitesseMarche);
    ~Pinguin();

    void nage() override;  
    void marche() override;
    void sePresenter();
};

#endif