#include <iostream>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

int main(){
    freopen("base.txt", "r", stdin);
    int npeliculas; cin >> npeliculas;
    for (int i = 0; i < npeliculas; i++){
        int palabraspelicula; cin >> palabraspelicula;
        string pelicula; cin >> pelicula;
        for (int j = 0; j < palabraspelicula-1; j++){
            string palabra; cin >> palabra;
            pelicula = pelicula + " " + palabra;
        }
        int califs, promedio; cin >> califs >> promedio;
        cout << pelicula << "\n";
    }
    int nseries; cin >> nseries;
    for (int i = 0; i < nseries; i++){
        int palabrasSerie; cin >> palabrasSerie;
        string serie; cin >> serie;
        for (int j = 0; j < palabrasSerie-1; j++){
            string palabra; cin >> palabra;
            serie = serie + " " + palabra;
        }
        int nepisodios; cin >> nepisodios;
        vector<string> episodios;
        for (int k = 0; k < nepisodios; k++){
            int palabrasEpisodio; cin >> palabrasEpisodio;
            string episodio; cin >> episodio;
            for (int j = 0; j < palabrasEpisodio-1; j++){
                string palabra; cin >> palabra;
                episodio = episodio + " " + palabra;
            }
            episodios.push_back(episodio);
        }
        int califs, promedio; cin >> califs >> promedio;
        cout << serie << " " << califs <<  " " << promedio << "\n";
        for (auto aa: episodios){
            cout << aa << " ";
        }
        cout << "\n";
    }
    return 0;
}