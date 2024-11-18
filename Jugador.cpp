#include "Jugador.h"
#include <iostream>

Jugador::Jugador(int x, int y) : posX(x), posY(y) {}

void Jugador::mover(char direccion, Mapa& mapa) {
    switch (direccion) {
        case 'w':
            if (mapa.esMovimientoValido(posX - 1, posY)) posX--;
        break;
        case 's':
            if (mapa.esMovimientoValido(posX + 1, posY)) posX++;
        break;
        case 'a':
            if (mapa.esMovimientoValido(posX, posY - 1)) posY--;
        break;
        case 'd':
            if (mapa.esMovimientoValido(posX, posY + 1)) posY++;
        break;
        default:
            std::cout << "Movimiento no válido.\n";
        break;
    }
}

int Jugador::getPosX() const { return posX; }
int Jugador::getPosY() const { return posY; }