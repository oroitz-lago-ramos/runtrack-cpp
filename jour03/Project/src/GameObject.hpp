#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP

#include "Vector2d.hpp"
#include "raylib.h"

class GameObject: public Vector2d
{
private:
    /* data */
public:
    GameObject(double x, double y);
    GameObject();
    ~GameObject();

    virtual void draw();
    virtual void update();
};

#endif
