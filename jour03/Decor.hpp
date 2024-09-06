#ifndef DECOR_HPP
#define DECOR_HPP

#include "GameObject.hpp"

class Decor : public GameObject
{
private:
    /* data */
public:
    Decor(double x, double y);
    Decor();
    ~Decor();

    void draw() override;
    void update() override;
};



#endif