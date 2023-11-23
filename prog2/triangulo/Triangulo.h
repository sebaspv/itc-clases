#pragma once
#include "Punto2D.cpp"

class Triangulo{
    private:
        Punto2D vert1;
        Punto2D vert2;
        Punto2D vert3;
    public:
        Triangulo();
        Triangulo(Punto2D, Punto2D, Punto2D);
        double Perimetro();
        double Area();
};