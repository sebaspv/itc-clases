#include "Reward.h"

Reward::Reward(){
    rewardValue = 3;
}

Reward::Reward(int reward){
    rewardValue = reward;
}

int Reward::getReward(){
    return rewardValue;
}

void Reward::setReward(int newReward){
    rewardValue = newReward;
}