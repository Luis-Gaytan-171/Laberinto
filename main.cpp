#include "Game.h"
#include <iostream>

int main() {
    Game game("Player1", 5, 5);
    game.start();

    char direction;
    std::cout << "Welcome to the Maze Game.\n";

    while (true) {
        std::cout << "Move (w=up, s=down, a=left, d=right, q=quit): ";
        std::cin >> direction;
        if (direction == 'q') break;

        std::string result = game.movePlayer(direction);
        std::cout << result << '\n';
    }

    std::cout << "Thanks for playing!\n";
    return 0;
}
