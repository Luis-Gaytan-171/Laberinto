#ifndef MAZE_H
#define MAZE_H

#include "Zone.h"
#include <vector>
#include <string>

class Maze {
public:
    Maze(int rows, int cols); //show the maze in the screen
    [[nodiscard]] std::string displayMaze(int playerX, int playerY) const;
    [[nodiscard]] bool isValidMove(int x, int y) const;
    Zone* getZone(int x, int y);

private:
    int rows, cols;
    std::vector<std::vector<Zone*>> zones;
};

#endif
