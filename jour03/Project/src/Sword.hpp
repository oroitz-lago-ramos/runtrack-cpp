#ifndef SWORD_HPP
#define SWORD_HPP
#include "Weapon.hpp"

class Sword: public Weapon
{
private:
    /* data */
public:
    Sword(/* args */);
    ~Sword();

    void attack() override;


};

#endif