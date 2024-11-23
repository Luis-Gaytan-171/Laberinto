#include "Player.h"

Player::Player(const int x, const int y) : posX(x), posY(y) {}

void Player::move(const char direction, const Maze& maze) {
    switch (direction) {
        case 'w':
            if (maze.isValidMove(posX - 1, posY)) posX--;
        break;
        case 's':
            if (maze.isValidMove(posX + 1, posY)) posX++;
        break;
        case 'a':
            if (maze.isValidMove(posX, posY - 1)) posY--;
        break;
        case 'd':
            if (maze.isValidMove(posX, posY + 1)) posY++;
        break;
        default:
            break;
    }
}
int Player::getPosX() const {
    return posX;
}

int Player::getPosY() const {
    return posY;
}
