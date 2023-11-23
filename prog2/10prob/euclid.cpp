#include <bits/stdc++.h>
using namespace std;

int main(){
    float x1; float x2;
    float y1; float y2;
    cout << "X y Y del primer punto separados por espacios: ";
    cin >> x1 >> y1;
    cout << "X y Y del segundo punto separados por espacios: ";
    cin >> x2 >> y2;
    float euclid = sqrt(pow(abs(x1-x2), 2) + pow(abs(y1-y2), 2));
    cout << euclid << " es la distancia entre los dos puntos" << endl;
}