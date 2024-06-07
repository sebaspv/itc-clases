#pragma once
#include "Penalty.cpp"
#include "Reward.cpp"
#include <utility>

class SpecialScore: public Penalty, public Reward { // Herencia multiple
    public:
        SpecialScore();
        SpecialScore(int, int);
};