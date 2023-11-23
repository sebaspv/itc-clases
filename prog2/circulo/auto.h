#pragma once
#include "motor.cpp"
#include <string>

using namespace std;
class Auto{
    private:
        Motor motor;
        string marca;
        string submarca;
    public:
        Auto(Motor m, string marc, string subm);
        void verAuto();
};