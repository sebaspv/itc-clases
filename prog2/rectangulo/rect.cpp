#include "rect.h"

Rectangulo::Rectangulo(double b, double h){
    Rectangulo::base = b;
    Rectangulo::altura = h;
}

Rectangulo::Rectangulo(){
    Rectangulo::base = 0;
    Rectangulo::altura = 0;
}

void Rectangulo::setBase(double b){
    Rectangulo::base = b;
}

void Rectangulo::setAltura(double h){
    Rectangulo::altura = h;
}

double Rectangulo::getArea(){
    return Rectangulo::base*Rectangulo::altura;
}

double Rectangulo::getPerimetro(){
    return (Rectangulo::base*2)+(Rectangulo::altura*2);
}