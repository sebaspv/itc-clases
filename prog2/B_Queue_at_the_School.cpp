#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    ll n; ll t; cin >> n >> t;
    vector<char> fil; 
    for (ll i = 0; i < n; i++){
        char gen; cin >> gen;
        fil.push_back(gen);
    }
    for (ll j = 0; j < t; j++){
        for (ll i = 0; i < n-1; i++){
            if (fil[i+1] == 'G' && fil[i] == 'B'){
                fil[i] = 'G';
                fil[i+1] = 'B';
                i++;
            }
        }
    }
    for (auto a: fil){
        cout << a;
    }
}