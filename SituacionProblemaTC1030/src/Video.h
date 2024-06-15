#pragma once
#include <string>

using namespace std;
class Video {
    protected:
        int duracion;
        int rating;
        int usuarios;
        string nombre;
    public:
        Video();
        Video(int, int, int, string);
        void operator+(int);
        int getRating();
        int getDuracion();
        void setRating(int);
        string getNombre();
};