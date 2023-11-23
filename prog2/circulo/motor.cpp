#include "motor.h"

Motor::Motor(int cilindros, double capacidad){
    Motor::cilindros = cilindros;
    Motor::capacidad = capacidad;
}

void Motor::setCapacidad(double capacidad){
    Motor::capacidad = capacidad;
}

void Motor::setCilindros(int cilindros){
    Motor::cilindros = cilindros;
}

double Motor::getCapacidad(){
    return Motor::capacidad;
}

int Motor::getCilindros(){
    return Motor::cilindros;
}
Motor::Motor(){
    Motor::cilindros = 0;
    Motor::capacidad = 0;
}