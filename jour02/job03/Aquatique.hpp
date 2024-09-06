#ifndef AQUATIQUE_HPP
#define AQUATIQUE_HPP

class Aquatique
{
private:
    double vitesseNage;
protected:
    virtual void nage() = 0;

    double getVitesseNage() const;
    void setVitesseNage(double vitesse);

public:
    Aquatique(double vitesseNage);
};

#endif
