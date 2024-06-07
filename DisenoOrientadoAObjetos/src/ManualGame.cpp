#include <iostream>
#include <vector>
#include <string>

class ManualGame: public Game {
    public:
        void start(){
            tablero.penalty = especiales.getPenalty();
            tablero.reward = especiales.getReward();
            std::cout << "Enter C to continue playing and E to end the game at any turn:\n";
            for (int i = 1; i <= numJugadores; i++){
                Jugador nuevoJugador(i);
                nuevoJugador.posicion = 1;
                jugadores.push_back(nuevoJugador);
            }
            Dice dado;
            int turno = 1;
            bool ganador = false;
            int gano = -1;
            while (!tablero.ended){
                std::string movimiento;
                std::cin >> movimiento;
                if (ganador){
                    std::cout << "--GAME OVER--\n";
                    std::cout << "Player number " << gano << " wins\n";
                    break;
                }
                else if (movimiento == "E"){
                    std::cout << "--GAME OVER--\n";
                    std::cout << "Thanks for playing!\n";
                    break;
                }
                else if (movimiento == "C"){
                    if (aJugar > jugadores.size()){
                        aJugar = 1; // Se reinicia
                    }
                    int amover = dado.roll()%6 + 1;
                    if (amover + jugadores[aJugar-1].posicion > 30){
                        std::cout << "--GAME OVER--\n";
                        std::cout << "Player number " << aJugar << " wins\n";
                        tablero.ended = true;
                        break;
                    }
                    int posicionOriginal = jugadores[aJugar-1].posicion;
                    int toadd = tablero.Casilla(jugadores[aJugar-1].posicion+amover);
                    jugadores[aJugar-1].mover(toadd + amover);
                    if (jugadores[aJugar-1].posicion < 1){
                        jugadores[aJugar-1].posicion = 1;
                    }
                    std::cout << turno << " " << aJugar << " " << posicionOriginal << " " << amover << " "  << tablero.tablerojuego[posicionOriginal + amover-1] << " " << jugadores[aJugar-1].posicion << "\n";
                    std::cout << "\n"; // Separar tablero y turno en lineas distintas
                    turno++;
                    aJugar++;
                    for (int i = 0; i < (int)tablero.tablerojuego.size(); i++){
                        bool writeCelda = true;
                        bool claimed = false;
                        for (auto aa: jugadores){
                            if (i+1 == aa.posicion && !claimed){
                                std::cout << aa.id << " ";
                                writeCelda = false;
                                claimed = true;
                            }
                        }
                        if (writeCelda) {
                            std::cout << tablero.tablerojuego[i] << " ";
                        }
                        if ((i + 1) % 6 == 0){
                            std::cout << "\n";
                        }
                    }
                    std::cout << "\n";
                }
                else {
                    std::cout << "Invalid option\n";
                }
            }
        }
};