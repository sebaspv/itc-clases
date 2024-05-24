#include "Dice.h"
#include <cstdlib>
#include <time.h>

Dice::Dice(){

}

int Dice::roll(){
    std::srand(time(0));
    return rand()%6 + 1; // Siempre de 1 a 6
}