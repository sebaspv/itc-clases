#include "Triangulo.cpp"
#include <iostream>


using namespace std;
int main(){
    Triangulo mitriangulo(Punto2D(0, 0), Punto2D(50, 30), Punto2D(25, 10));
    cout << mitriangulo.Area() << endl;
    cout << mitriangulo.Perimetro() << endl;
}