#ifndef ZONA_H
#define ZONA_H

#include <string>

class Zona {
public:
    Zona(int x, int y, const std::string& tipo);
    virtual void interactuar() = 0;

    int getPosX() const;
    int getPosY() const;
    std::string getTipo() const;

protected:
    int posX;
    int posY;
    std::string tipo;
};

#endif
