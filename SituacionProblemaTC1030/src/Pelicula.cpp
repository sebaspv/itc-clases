#include "Pelicula.h"
#include <string>

using namespace std;


Pelicula::Pelicula(int _duracion, int _rating, int _usuarios, string _nombre){
    duracion = _duracion;
    rating = _rating;
    usuarios = _usuarios;
    nombre = _nombre;
}