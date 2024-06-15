#include "Video.h"
#include <string>

using namespace std;

Video::Video(){
    
}

Video::Video(int _duracion, int _rating, int _usuarios, string _nombre){
    duracion = _duracion;
    rating = _rating;
    usuarios = _usuarios;
    nombre = _nombre;
}

void Video::operator+(int newrating){
    rating = ((rating*usuarios) + newrating)/(usuarios+1); // NOTA: Se redondea
    usuarios++;
}

int Video::getRating(){
    return rating;
}

int Video::getDuracion(){
    return duracion;
}

string Video::getNombre(){
    return nombre;
}

void Video::setRating(int _rating){
    rating = _rating;
}