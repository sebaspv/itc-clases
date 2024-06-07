#include "Tablero.h"
#include <vector>
#include <cstdlib>
#include <time.h>


Tablero::Tablero(int casillasL, int casillasS, int casillasT){
    ended = false;
    std::vector<char> juego(casillasT, 'N'); // Tamano 30, se rellena por default con N
    std::srand(time(0));
    for (int i = 0; i < casillasL; i++){
        int randomCasilla = rand()%juego.size();
        juego[randomCasilla] = 'L';
    }
    for (int i = 0; i < casillasS; i++){
        int randomCasilla = rand()%juego.size();
        juego[randomCasilla] = 'S';
    }
    tablerojuego = juego;
}

int Tablero::Casilla(int posicion){ // Cuantas posiciones se aumenta con la casilla
    char casilla = tablerojuego[posicion-1]; // Index 0
    if (casilla == 'S'){
        return penalty; // Se retrocede el penalty
    }
    else if (casilla == 'L'){
        return reward; // Se avanza el reward
    }
    return 1; // Se avanza 1 si la casilla es de otro tipo
}