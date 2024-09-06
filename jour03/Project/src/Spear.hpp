#ifndef SPEAR_HPP
#define SPEAR_HPP
#include "Weapon.hpp"

class Spear: public Weapon
{
private:
    /* data */
public:
    Spear(/* args */);
    ~Spear();

    void attack() override;
};

#endif