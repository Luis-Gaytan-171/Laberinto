#ifndef PARTIDA_H
#define PARTIDA_H

#include "Jugador.h"
#include "Mapa.h"
#include "Logro.h"
#include <vector>

class Partida {
public:
    Partida(const std::string& nombreJugador, int filas, int columnas);
    void iniciar();
    void moverJugador(char direccion);

private:
    Jugador jugador;
    Mapa mapa;
    std::vector<Logro> logros;
};

#endif
