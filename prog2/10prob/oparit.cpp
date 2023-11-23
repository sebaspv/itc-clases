#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1; int n2; cin >> n1 >> n2;
    int mult = n1*n2;
    int res = n1-n2;
    int suma = n1+n2;
    cout << suma;
    cout << mult << endl;
    cout << res << endl;
    if (n2 == 0){
        cout << "No se puede dividir entre 0" << endl;
    }
    else {
        int modul = n1%n2;
        float div = (float)n1/(float)n2;
        cout << div << endl;
        cout << modul << endl;
    }
}