#include "ZonaSecreta.h"

ZonaSecreta::ZonaSecreta() : descubierta(false) {}

void ZonaSecreta::interactuar() {
    if (!descubierta) {
        descubierta = true;
        std::cout << "¡Has encontrado el Easter Egg!\n";
    }
}
