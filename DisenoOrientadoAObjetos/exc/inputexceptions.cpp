#include <iostream>
#include <vector>
#include <string>

class InvalidConfigurationException: public std::exception {
    public:
        std::string what(std::string param, int param_value){
            return "Invalid " + param + " value " + std::to_string(param_value);
        }
};



int main(){
    int tiles;
    int snakes;
    int ladders;
    int penalty;
    int reward;
    int players;
    int turns;
    std::string gametype = "M";
    std::cout << "Tiles: ";
    std::cin >> tiles;
    std::cout << "Snake tiles: ";
    std::cin >> snakes;
    std::cout << "Ladder tiles: ";
    std::cin >> ladders;
    std::cout << "Penalty score: ";
    std::cin >> penalty;
    std::cout << "Reward score: ";
    std::cin >> reward;
    std::cout << "Players: ";
    std::cin >> players;
    std::cout << "N of turns: ";
    std::cin >> turns;
    try {
        if (tiles <= 1){
            throw InvalidConfigurationException();
        }
    }
    catch (InvalidConfigurationException exc){
        std::cout << exc.what("tiles", tiles) << "\n";
        return 1;
    }
    try {
        if (snakes >= tiles){
            throw InvalidConfigurationException();
        }
    }
    catch (InvalidConfigurationException exc){
        std::cout << exc.what("snake tiles", snakes) << "\n";
        return 1;
    }
    try {
        if (ladders >= tiles){
            throw InvalidConfigurationException();
        }
    }
    catch (InvalidConfigurationException exc){
        std::cout << exc.what("ladder tiles", ladders) << "\n";
        return 0;
    }
    try {
        if (penalty > 0){
            throw InvalidConfigurationException();
        }
    }
    catch (InvalidConfigurationException exc){
        std::cout << exc.what("penalty", penalty) << "\n";
        return 0;
    }
    try {
        if (reward < 0){
            throw InvalidConfigurationException();
        }
    }
    catch (InvalidConfigurationException exc){
        std::cout << exc.what("reward", reward) << "\n";
        return 0;
    }
    try {
        if (players > tiles || players <= 1){
            throw InvalidConfigurationException();
        }
    }
    catch (InvalidConfigurationException exc){
        std::cout << exc.what("player number", players) << "\n";
        return 0;
    }
    return 0;
}