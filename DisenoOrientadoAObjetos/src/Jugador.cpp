#include "Jugador.h"

Jugador::Jugador(int identificador){
    id = identificador;
    posicion = 0;
}

void Jugador::mover(int nuevapos){
    if (posicion + nuevapos < 0){
        posicion = 0;
    }
    else {
        posicion+=nuevapos; // Nos trasladamos a otra casilla
    }
}
