#include "Polygon.hpp"

Polygon::Polygon() : Shape{}
{
    NumLados = 0;
}

Polygon::Polygon(int valX, int valY, int n) : Shape(valX, valY)
{
    NumLados = n;
}

int Polygon::getNumLados()
{
    return NumLados;
}