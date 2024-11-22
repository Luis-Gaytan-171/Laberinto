#ifndef PLAYER_H
#define PLAYER_H

#include "Maze.h"

class Player {
public:
    Player(int x, int y);
    void move(char direction, const Maze& maze);
    int getPosX() const;
    int getPosY() const;

private:
    int posX;
    int posY;
};

#endif
