#ifndef ZONASECRETA_H
#define ZONASECRETA_H

#include "Zona.h"
#include <iostream>

class ZonaSecreta : public Zona {
public:
    ZonaSecreta();
    void interactuar() override;

private:
    bool descubierta;
};

#endif
