#include <iostream>
#include <vector>
#include "fraccion.cpp"
using namespace std;

int main(){
    int n;
    cout << "Cuantas fracciones quieres declarar: ";
    cin >> n;
    if (n < 5){
        cout << "Debes declarar al menos 5 fracciones" << endl;
        return 0;
    }
    vector<Fraccion> fracciones;
    int fraccion = 1;
    while (fracciones.size() < n){
        int deno; int nume;
        cout << "Numerador de fraccion " << fraccion << ": ";
        cin >> nume;
        cout << "Denominador de fraccion " << fraccion << ": ";
        cin >> deno;
        if (deno == 0){
            cout << "No se puede tener un denominador igual a 0" << endl;
        }
        else{
            fracciones.push_back(Fraccion(nume, deno));
            fraccion++;
        }
    }
    cout << "La suma de la primer fraccion y la segunda es: ";
    fracciones[0].sumaFracciones(fracciones[1]);
    cout << "La suma de la segunda fraccion y la tercer fraccion es: ";
    fracciones[1].sumaFracciones(fracciones[2]);
    return 0;
}