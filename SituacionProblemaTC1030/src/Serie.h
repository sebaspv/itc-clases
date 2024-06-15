#pragma once
#include "Episodio.cpp"
#include <vector>
#include <string>

using namespace std;

class Serie {
    protected:
        string nombre;
    public:
        Serie(vector<Episodio>, string);
        vector<Episodio> episodios;
        string getNombre();
};