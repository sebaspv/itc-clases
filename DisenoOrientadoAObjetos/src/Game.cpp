#include "Dice.cpp"
#include "Tablero.cpp"
#include "Jugador.cpp"
#include "SpecialScore.cpp"
#include <iostream>
#include <vector>

class Game {
    public:
        SpecialScore especiales{-3, 3};
        Tablero tablero{3, 3, 30}; // Casillas Reward, Penalty, Totales
        std::vector<Jugador> jugadores;
        int numJugadores = 2;
        int aJugar = 1; // Jugador con turno actual
        int maxTurns = 20;
};