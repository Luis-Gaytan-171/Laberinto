#ifndef PLAYER_H
#define PLAYER_H

#include "Maze.h"

class Player {
public:
    Player(int x, int y); //get the position of the player
    void move(char direction, const Maze& maze);
    [[nodiscard]] int getPosX() const;
    [[nodiscard]] int getPosY() const;

private:
    int posX;
    int posY;
};

#endif
