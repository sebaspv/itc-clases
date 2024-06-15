#include "Episodio.h"
#include <string>

using namespace std;

Episodio::Episodio(int _duracion, int _rating, int _usuarios, int _temporada, string _nombre){
    duracion = _duracion;
    rating = _rating;
    usuarios = _usuarios;
    temporada = _temporada;
    nombre = _nombre;
}

int Episodio::getTemporada(){
    return temporada;
}