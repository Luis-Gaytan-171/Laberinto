#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "Maze.h"
#include "Achievement.h"
#include <vector>
#include <string>

class Game {
public:
    Game(const std::string& playerName, int rows, int cols);

    static void start(); // start the game
    std::string movePlayer(char direction);

private: //call the element to play the game
    Player player;
    Maze maze;
    std::vector<Achievement> achievements;
};

#endif
