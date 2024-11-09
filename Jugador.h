#ifndef JUGADOR_H
#define JUGADOR_H

#include "Mapa.h"

class Jugador {
public:
    Jugador(int x, int y);

    void mover(char direccion, Mapa& mapa);
    bool hasGanado(const Mapa& mapa) const;

private:
    int posX;
    int posY;
};

#endif
