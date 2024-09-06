#ifndef TERRESTRE_HPP
#define TERRESTRE_HPP

class Terrestre
{
private:
    double vitesseMarche;

protected:
    virtual void marche() = 0;

    double getVitesseMarche() const;
    void setVitesseMarche(double vitesse);

public:
    Terrestre(double vitesseMarche);
};

#endif
