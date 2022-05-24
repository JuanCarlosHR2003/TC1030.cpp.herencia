#pragma once

#include "Shape.hpp"

class Polygon : public Shape
{
private:
    int NumLados;
public:
    Polygon();
    Polygon(int, int, int);

    int getNumLados();
};