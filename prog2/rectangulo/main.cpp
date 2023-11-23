#include "rect.cpp"
#include <iostream>

using namespace std;

int main(){
    Rectangulo rect1(3.5, 2);
    cout << rect1.getArea() << endl;
    cout << rect1.getPerimetro() << endl;
    Rectangulo rect2;
    cout << "Otro rectangulo" << endl;
    rect2.setBase(2.8);
    rect2.setAltura(3.2);
    cout << rect2.getArea() << endl;
    cout << rect2.getPerimetro() << endl;
}