#pragma once

class Episodio: public Video {
    protected:
        int temporada;
    public:
        Episodio(int, int, int, int, string); // Ahora el constructor tambien toma la temporada
        int getTemporada();
};