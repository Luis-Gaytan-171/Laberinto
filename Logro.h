#ifndef LOGRO_H
#define LOGRO_H

#include <string>

class Logro {
public:
    Logro(const std::string& descripcion);
    void desbloquear();
    bool estaDesbloqueado() const;

private:
    std::string descripcion;
    bool desbloqueado;
};

#endif
