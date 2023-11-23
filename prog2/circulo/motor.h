#pragma once

class Motor{
    private:
        int cilindros;
        double capacidad;
    public:
        Motor(int, double);
        Motor();
        void setCilindros(int);
        void setCapacidad(double);
        int getCilindros();
        double getCapacidad();
};