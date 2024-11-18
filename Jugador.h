#ifndef JUGADOR_H
#define JUGADOR_H

#include "Mapa.h"

class Jugador {
public:
    Jugador(int x, int y);
    void mover(char direccion, Mapa& mapa);
    int getPosX() const;
    int getPosY() const;

private:
    int posX;
    int posY;
};

#endif