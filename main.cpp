#include <iostream>
#include "core/MazeGame.h"
#include "core/Maze.h"

int main() {
    MazeGame game;
    Maze* maze = game.CreateMaze();

    std::cout << "Maze created.\n";

    delete maze;
    return 0;
}
