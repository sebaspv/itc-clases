#include "Triangulo.h"

Triangulo::Triangulo(Punto2D v1, Punto2D v2, Punto2D v3){
    vert1 = v1;
    vert2 = v2;
    vert3 = v3;
}

Triangulo::Triangulo(){
    vert1 = Punto2D(0, 0);
    vert2 = Punto2D(0, 0);
    vert3 = Punto2D(0, 0);
}

double Triangulo::Perimetro(){
    double a = vert1.distance(vert2);
    double b = vert2.distance(vert3);
    double c = vert3.distance(vert1);
    return a+b+c;
}

double Triangulo::Area(){
    double a = vert1.distance(vert2);
    double b = vert2.distance(vert3);
    double c = vert3.distance(vert1);

    double s = Perimetro()/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}