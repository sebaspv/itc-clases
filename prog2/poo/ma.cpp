#include <bits/stdc++.h>
#include "inu.cpp"

using namespace std;

int main(){
    vector<int> tops = {3, 5, 1, 10};
    x ne(tops);
    ne.sor();
    for (auto a: ne.bac()){
        cout << a << endl;
    }
}