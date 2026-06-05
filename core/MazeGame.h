#ifndef CORE_MAZEGAME_H
#define CORE_MAZEGAME_H

#include <memory>

class Maze;

class MazeGame {
public:
    std::shared_ptr<Maze> CreateMaze();
};

#endif
