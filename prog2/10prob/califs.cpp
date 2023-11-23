#include <bits/stdc++.h>
using namespace std;

int main(){
    float prom;
    string nom; 
    float c1; float c2; float c3;
    cout << "Nombre de alumno: ";
    cin >> nom;
    cout << "Calificaciones separadas por espacios: ";
    cin >> c1 >> c2 >> c3;
    prom = (c1+c2+c3)/3;
    cout << "Promedio de alumno " << nom << ": " << prom << endl;
}