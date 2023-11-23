#include "fraccion.h"
#include <algorithm>
#include <iostream>

void Fraccion::setnum(int numerador){
    num=numerador;
}
void Fraccion::setden(int denominador){
    den=denominador;
}
int Fraccion::getnum(){
    return num;
}
int Fraccion::getden(){
    return den;
}
Fraccion::Fraccion(){
    num=1;
    den=2;
}
Fraccion::~Fraccion(){

}

Fraccion::Fraccion(int nume, int deno){
    num = nume;
    den = deno;
}
double Fraccion::calcValorReal(){
    double val=(float)num/(float)den;
    return val;
}
void Fraccion::sumaFracciones(Fraccion otro){
    int sumden=(den*otro.getden());
    int pvalor=(otro.getden()*num);
    int svalor=(den*otro.getnum());
    int sumnum=(pvalor+svalor);
    
    int gc = __gcd(sumden, sumnum);
    sumden = sumden/gc;
    sumnum = sumnum/gc;
    cout << sumnum << "/" << sumden << endl;
}
void Fraccion::imprimeFraccion(){
    cout<< num <<"/"<< den<<endl;
    cout<<calcValorReal()<<endl;
}