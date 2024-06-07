#include "Jugador.h"

Jugador::Jugador(int identificador){
    id = identificador;
    posicion = 0;
}

void Jugador::mover(int nuevapos){
    posicion+=nuevapos;
}
