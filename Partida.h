#ifndef PARTIDA_H
#define PARTIDA_H

#include <vector>
#include <string>
#include "Jugador.h"
#include "Mapa.h"
#include "Logro.h"

class Partida {
public:
    Partida(const std::string& nombreJugador);
    void iniciarPartida();
    void actualizar(); // Verifica si se han desbloqueado nuevos logros
    void guardarPartida();
    void cargarPartida();

private:
    Jugador jugador;
    Mapa mapa;
    std::vector<Logro*> logros;
};

#endif
