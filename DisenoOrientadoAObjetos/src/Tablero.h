#pragma once
#include <vector>

class Tablero{
    public:
        Tablero(int, int, int);
        std::vector<char> tablerojuego;
        int Casilla(int);
        bool ended;
        int penalty;
        int reward;
};