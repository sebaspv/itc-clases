#include "AutoGame.cpp"
#include <iostream>
#include <vector>
#include <string>
#include "ManualGame.cpp"

class MyGame{
    ManualGame mgame;
    AutoGame agame;
    public:
        void start(){
            int tiles = 30;
            int snakes = 3;
            int ladders = 3;
            int penalty = -3;
            int reward = 3;
            int players = 2;
            int turns = 20;
            std::string gametype = "M";
            SpecialScore puntos(penalty, reward);
            Tablero tableroDeJuego(ladders, snakes, tiles);
            agame.especiales = puntos;
            mgame.especiales = puntos;
            agame.numJugadores = players;
            mgame.numJugadores = players;
            agame.tablero = tableroDeJuego;
            mgame.tablero = tableroDeJuego;
            if (gametype == "A"){
                agame.start();
            }
            else if (gametype == "M"){
                mgame.start();
            }
            else {
                std::cout << "Unavailable option\n";
            }
        }
};

int main(){
    MyGame game;
    game.start();
    return 0;
}
