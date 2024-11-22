#include "Game.h"

Game::Game(const std::string& playerName, int rows, int cols)
    : player(0, 0), maze(rows, cols) {
    achievements.emplace_back("Find the Easter Egg");
}

void Game::start() {}

std::string Game::movePlayer(char direction) {
    player.move(direction, maze);
    Zone* zone = maze.getZone(player.getPosX(), player.getPosY());
    std::string interactionMessage;

    if (zone) {
        interactionMessage = zone->interact();
        achievements[0].unlock();
    }
    return maze.displayMaze(player.getPosX(), player.getPosY()) + interactionMessage;
}
