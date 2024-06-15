#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <fstream>
#include "Pelicula.cpp"
#include "Serie.cpp"

using namespace std;

int main(){
    ifstream fin("base.txt");
    int npeliculas; fin >> npeliculas;
    vector<Pelicula> peliculasdisp;
    for (int i = 0; i < npeliculas; i++){
        int palabraspelicula; fin >> palabraspelicula;
        string pelicula; fin >> pelicula;
        for (int j = 0; j < palabraspelicula-1; j++){
            string palabra; fin >> palabra;
            pelicula = pelicula + " " + palabra;
        }
        int califs, promedio, duracion; fin >> califs >> promedio >> duracion;
        Pelicula peli(duracion, promedio, califs, pelicula);
        peliculasdisp.push_back(peli);
    }
    vector<Serie> seriesdisp;
    int nseries; fin >> nseries;
    for (int i = 0; i < nseries; i++){
        int palabrasSerie; fin >> palabrasSerie;
        string serie; fin >> serie;
        for (int j = 0; j < palabrasSerie-1; j++){
            string palabra; fin >> palabra;
            serie = serie + " " + palabra;
        }
        int nepisodios; fin >> nepisodios;
        vector<Episodio> episodios;
        for (int k = 0; k < nepisodios; k++){
            int palabrasEpisodio; fin >> palabrasEpisodio;
            string episodio; fin >> episodio;
            for (int j = 0; j < palabrasEpisodio-1; j++){
                string palabra; fin >> palabra;
                episodio = episodio + " " + palabra;
            }
            int duracionep, ntemporada, califep, promedioep; fin >> duracionep >> ntemporada >> califep >> promedioep;
            Episodio nuevoep(duracionep, promedioep, califep, ntemporada, episodio);
            episodios.push_back(nuevoep);
        }
        Serie nserie(episodios, serie);
        seriesdisp.push_back(nserie);
    }
    for (auto aa: seriesdisp){
        cout << aa.getNombre() << "\n";
        for (auto episodio: aa.episodios){
            cout << episodio.getNombre() << " ";
            cout << episodio.getRating() << " ";
        }
        cout << "\n";
    }
    cout << "Welcome!\n";
    cout << "Enter an option from the menu offered below:\n";
    cout << "Enter 1 To show all movies with a certain rating\n";
    cout << "Enter 2 To show all episodes with a certain rating from a certain series\n";
    cout << "Enter 3 To grade an episode\n";
    cout << "Enter 4 To grade a movie\n";
    cout << "Enter anything else to exit.\n";
    while (true){
        int opcion; cin >> opcion;
        if (opcion == 1){
            cout << "Enter the rating you're looking for: ";
            int ratingbusc; cin >> ratingbusc;
            vector<Pelicula> busqueda;
            for (auto aa: peliculasdisp){
                if (aa.getRating() == ratingbusc){
                    busqueda.push_back(aa);
                }
            }
            if (busqueda.empty()){
                cout << "There are no movies with that criteria.\n";
                continue;
            }
            cout << "Here are your movie recommendations:\n";
            for (auto aa: busqueda){
                cout << aa.getNombre() << " ";
            }
            cout << "\n";
        }
        else if (opcion == 2){
            cout << "Enter the series to search episodes on (without extra whitespaces):\n";
            string serie; getline(cin >> ws, serie);
            cout << "Enter the rating to search episodes:";
            int ratingbusc; cin >> ratingbusc;
            vector<Episodio> abuscar;
            for (auto aa: seriesdisp){
                if (aa.getNombre() == serie){
                    abuscar = aa.episodios;
                    break;
                }
            }
            vector<Episodio> busqueda;
            for (auto aa: abuscar){
                if (aa.getRating() == ratingbusc){
                    busqueda.push_back(aa);
                }
            }
            cout << "Here are your episode recommendations:\n";
            for (auto aa: busqueda){
                cout << aa.getNombre() << " ";
            }
            cout << "\n";
        }
        else if (opcion == 3){
            cout << "What series are you rating an episode on?:\n";
            string serie; getline(cin >> ws, serie);
            cout << "These are the episodes. Enter the name of the episode you want to rate:\n";
            vector<Episodio> abuscar;
            for (auto aa: seriesdisp){
                if (aa.getNombre() == serie){
                    abuscar = aa.episodios;
                    break;
                }
            }
            for (auto aa: abuscar){
                cout << aa.getNombre() << " ";
            }
            cout << "\n";
            string episode; getline(cin >> ws, episode);
            cout << "Enter your rating:";
            int nrating; cin >> nrating;
            bool found = false;
            for (auto &aa: abuscar){
                if (aa.getNombre() == episode){
                    aa + nrating;
                    cout << "The new rating is now: " << aa.getRating() << "\n";
                    for (auto &aa: seriesdisp){
                        if (aa.getNombre() == serie){
                            aa.episodios = abuscar;
                        }
                    }
                }
            }
            cout << "Your episode has been rated.\n";
        }
        else if (opcion == 4){
            cout << "What movie are you rating?:\n";
            string movie; getline(cin >> ws, movie);
            cout << "Enter your rating:";
            int mrating; cin >> mrating;
            for (auto &aa: peliculasdisp){
                if (aa.getNombre() == movie){
                    aa + mrating;
                    cout << "The new rating is now: " << aa.getRating() << "\n";
                    break;
                }
            }
        }
        else {
            cout << "Thanks for using our streaming service!\n";
            break;
        }
    }
    return 0;
}