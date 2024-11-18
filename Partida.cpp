#include "Partida.h"
#include <iostream>

int main() {
    std::cout << "Bienvenido al juego del laberinto.\n";
    Partida partida("Jugador1", 5, 5);
    partida.iniciar();

    char direccion;
    while (true) {
        std::cout << "Mover (w=arriba, s=abajo, a=izquierda, d=derecha, q=salir): ";
        std::cin >> direccion;
        if (direccion == 'q') break;
        partida.moverJugador(direccion);
    }

    std::cout << "Gracias por jugar.\n";
    return 0;
}

