#pragma once
#include<iostream>
using namespace std; 

class Fraccion{
    private: 
        int num;
        int den;
    public: 
        Fraccion();
        ~Fraccion();
        Fraccion(int, int);
        void setnum(int numerador);
        void setden(int denominador);
        int getnum();
        int getden();
        double calcValorReal();
        void sumaFracciones(Fraccion otro);
        void imprimeFraccion();
};