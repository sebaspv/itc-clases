#include <bits/stdc++.h>
using namespace std;

int main(){
    float a;
    float imp;
    cout << "Precio de producto ";
    cin >> a;
    cout << "Porcentaje de impuesto ";
    cin >> imp;
    cout << "Precio base "<< a;
    float tot = a*(imp/100);
    float sumatot = tot+a;
    cout << endl << "El precio del producto con " << tot << " extra de iva es " << sumatot << endl;
}