#pragma once

class Rectangulo{
    private:
        double base;
        double altura;
    public:
        Rectangulo(double base, double altura);
        Rectangulo();
        void setBase(double base);
        void setAltura(double base);

        double getArea();
        double getPerimetro();
};