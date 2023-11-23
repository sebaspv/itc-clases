#include "auto.cpp"
#include <iostream>


using namespace std;
int main(){
    Motor m1(4, 2.0);
    Auto jetta(m1, "VW", "Jetta");
    jetta.verAuto();
    Motor m2(4, 1.8);
    Auto corolla(m2, "Toyota", "Corola");
    corolla.verAuto();
}