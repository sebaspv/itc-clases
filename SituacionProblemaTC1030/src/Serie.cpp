#include "Serie.h"
#include <vector>
#include <string>

using namespace std;

Serie::Serie(vector<Episodio> _episodios, string _nombre){
    episodios = _episodios;
    nombre = _nombre;
}

string Serie::getNombre(){
    return nombre;
}