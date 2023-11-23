#include "auto.h"
#include "motor.h"
#include <string>
#include <iostream>

using namespace std;
Auto::Auto(Motor m, string marc, string subm){
    Auto::motor = m;
    Auto::marca = marc;
    Auto::submarca = subm;
}

void Auto::verAuto(){
    cout << Auto::marca << " " << Auto::submarca << endl;
        cout << Auto::motor.getCapacidad() << "L de " << Auto::motor.getCilindros() << " cilindros" <<endl;
}