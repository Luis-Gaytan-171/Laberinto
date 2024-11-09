#ifndef ZONASECRETA_H
#define ZONASECRETA_H

#include "Zona.h"

class ZonaSecreta : public Zona {
public:
    ZonaSecreta(int x, int y);
    void interactuar() override;

};

#endif