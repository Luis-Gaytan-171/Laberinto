#include "Mapa.h"
#include "ZonaSecreta.h"
#include <iostream>

Mapa::Mapa(int filas, int columnas) : filas(filas), columnas(columnas) {
    zonas.resize(filas, std::vector<Zona*>(columnas, nullptr));
    zonas[filas - 1][columnas - 1] = new ZonaSecreta(); // Agregar una zona secreta
}

void Mapa::mostrarMapa(int jugadorX, int jugadorY) const {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            if (i == jugadorX && j == jugadorY) std::cout << "* ";
            else if (zonas[i][j] != nullptr) std::cout << "S ";
            else std::cout << ". ";
        }
        std::cout << '\n';
    }
}

bool Mapa::esMovimientoValido(int x, int y) const {
    return x >= 0 && x < filas && y >= 0 && y < columnas;
}

Zona* Mapa::obtenerZona(int x, int y) {
    return zonas[x][y];
}
