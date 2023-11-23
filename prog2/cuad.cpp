#include <bits/stdc++.h>
using namespace std;

int main(){
    float a; float b; float c;
    float x1; float x2;
    cin >> a >> b >> c;
    float disc = pow(b, 2) - (4*a*c);
    if (disc < 0){
        cout << "No hay raices reales" << endl;
    }
    else if (disc == 0){
        disc = sqrt(disc);
        x1 = (-b+disc)/(2*a);
        cout << x1 << endl;
    }
    else {
        disc = sqrt(disc);
        x1 = (-b+disc)/(2*a);
        x2 = (-b-disc)/(2*a);
        cout << x1 << " " << x2 << endl;
    }
}