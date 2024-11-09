#ifndef MAPA_H
#define MAPA_H

#include <vector>
#include "Zona.h"

class Mapa {
public:
    Mapa();
    void cargarMapa(const std::string& archivo);
    void imprimirMapa(const Jugador& jugador) const;
    bool verificarColision(int x, int y) const;

private:
    int ancho;
    int alto;
    std::vector<Zona*> zonas;
    std::vector<std::string> grid;
};

#endif
