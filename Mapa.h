#ifndef MAPA_H
#define MAPA_H

#include "Zona.h"
#include <vector>

class Mapa {
public:
    Mapa(int filas, int columnas);
    void mostrarMapa(int jugadorX, int jugadorY) const;
    bool esMovimientoValido(int x, int y) const;
    Zona* obtenerZona(int x, int y);

private:
    int filas, columnas;
    std::vector<std::vector<Zona*>> zonas;
};

#endif

