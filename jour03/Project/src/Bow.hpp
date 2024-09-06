#ifndef BOW_HPP
#define BOW_HPP

#include "Weapon.hpp"

class Bow: public Weapon
{
private:
    /* data */
public:
    Bow(/* args */);
    ~Bow();

    void attack() override;
};

#endif