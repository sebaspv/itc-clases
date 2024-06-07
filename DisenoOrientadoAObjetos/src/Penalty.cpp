#include "Penalty.h"

Penalty::Penalty(){
    penaltyValue = -3;
}

Penalty::Penalty(int penalty){
    penaltyValue = penalty;
}

int Penalty::getPenalty(){
    return penaltyValue;
}

void Penalty::setPenalty(int newPenalty){
    penaltyValue = newPenalty;
}