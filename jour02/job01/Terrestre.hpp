#ifndef TERRESTRE_HPP
#define TERRESTRE_HPP

class Terrestre
{

public:
    Terrestre(double vitesseMarche);
    virtual ~Terrestre();

protected:
    virtual void marche() = 0;

    double getVitesseMarche() const;
    void setVitesseMarche(double vitesse);

private:
    double vitesseMarche;

};

#endif
