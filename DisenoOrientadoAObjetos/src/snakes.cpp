#include "Dice.cpp"
#include "Tablero.cpp"
#include "Jugador.cpp"
#include <iostream>

class MyGame{
    public:
        void start(){
            Tablero tablero(3, 3);
            tablero.penalty = -3;
            tablero.reward = 3;
            Jugador J1(1);
            Jugador J2(2);
            J1.posicion = 1;
            J2.posicion = 1;
            Dice dado;
            int turno = 1;
            bool gana1 = false;
            bool gana2 = false;
            std::cout << "\n";
            while (!tablero.ended){
                char jugada;
                std::cin >> jugada;
                if (jugada == 'E'){
                    tablero.ended = true;
                    std::cout << "El juego ha terminado\n";
                    break;
                }
                else if (J2.posicion >= 30 || gana2){
                    std::cout << "Gano el jugador 2 en el turno " << turno-1 << "\n";
                    tablero.ended = true;
                    break;
                }
                else if (J1.posicion >= 30 || gana1){
                    std::cout << "Gano el jugador 1 en el turno " << turno-1 << "\n";
                    tablero.ended = true;
                    break;
                }
                else if (jugada == 'C') {
                    for (int i = 0; i < (int)tablero.tablerojuego.size(); i++){
                        if (i+1 == J1.posicion){
                            std::cout << "1 ";
                        }
                        else if (i+1 == J2.posicion){
                            std::cout << "2 ";
                        }
                        else {
                            std::cout << tablero.tablerojuego[i] << " ";
                        }
                    }
                    std::cout << "\n";
                    if (turno % 2 == 0){ // Jugador 2
                        int amover = dado.roll()%6 + 1;
                        if (amover + J2.posicion > 30){
                            gana2 = true;
                            continue;
                        }
                        int posicionOriginal = J2.posicion;
                        int toadd = tablero.Casilla(J2.posicion+amover);
                        J2.posicion += toadd + amover;
                        if (J2.posicion < 1){
                            J2.posicion = 1;
                        }
                        std::cout << turno << " " << 2 << " " << posicionOriginal << " " << amover << " "  << tablero.tablerojuego[posicionOriginal + amover-1] << " " << J2.posicion << "\n";
                    }
                    else {
                        int amover = dado.roll() % 6 + 1;
                        if (amover + J1.posicion > 30){
                            gana1 = true;
                        }
                        int posicionOriginal = J1.posicion;
                        int toadd = tablero.Casilla(J1.posicion+amover);
                        J1.posicion += toadd + amover;
                        if (J1.posicion < 1){
                            J1.posicion = 1;
                        }
                        std::cout << turno << " " << 1 << " " << posicionOriginal << " " << amover << " "  << tablero.tablerojuego[posicionOriginal+amover-1] << " " << J1.posicion << "\n";
                    }
                    turno++;
                }
            }
        }
};

int main(){
    MyGame game;
    game.start();
    return 0;
}
