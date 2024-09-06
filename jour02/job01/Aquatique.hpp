#ifndef AQUATIQUE_HPP
#define AQUATIQUE_HPP

class Aquatique
{
public:
    Aquatique(double vitesseNage);
    virtual ~Aquatique();

protected:
    virtual void nage() = 0;

    double getVitesseNage() const;
    void setVitesseNage(double vitesse);

private:
    double vitesseNage;

};

#endif
