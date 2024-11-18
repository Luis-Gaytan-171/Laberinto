#include "Logro.h"

Logro::Logro(const std::string& descripcion) : descripcion(descripcion), desbloqueado(false) {}

void Logro::desbloquear() {
    desbloqueado = true;
}

bool Logro::estaDesbloqueado() const {
    return desbloqueado;
}
