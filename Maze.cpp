#include "Maze.h"
#include "SecretZone.h"
#include <sstream>

Maze::Maze(int rows, int cols) : rows(rows), cols(cols) {
    zones.resize(rows, std::vector<Zone*>(cols, nullptr));
    zones[rows - 1][cols - 1] = new SecretZone(); // Add a secret zone
}

std::string Maze::displayMaze(int playerX, int playerY) const {
    std::ostringstream mazeStream;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (i == playerX && j == playerY) mazeStream << "* ";
            else if (zones[i][j] != nullptr) mazeStream << "S ";
            else mazeStream << ". ";
        }
        mazeStream << '\n';
    }
    return mazeStream.str();
}

bool Maze::isValidMove(int x, int y) const {
    return x >= 0 && x < rows && y >= 0 && y < cols;
}

Zone* Maze::getZone(int x, int y) {
    return zones[x][y];
}
