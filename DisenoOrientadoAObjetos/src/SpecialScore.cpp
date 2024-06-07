#include "SpecialScore.h"

SpecialScore::SpecialScore(){
    rewardValue = 3;
    penaltyValue = -3;
}

SpecialScore::SpecialScore(int penalty, int reward){
    rewardValue = reward;
    penaltyValue = penalty;
}
