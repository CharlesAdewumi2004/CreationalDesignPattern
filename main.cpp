#include <iostream>
#include "core/MazeGame.h"
#include "core/Maze.h"

int main() {
    MazeGame game;
    std::shared_ptr<Maze> maze = game.CreateMaze();

    std::cout << "Maze created.\n";

    return 0;
}
