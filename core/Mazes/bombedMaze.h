#ifndef BOMBED_MAZE_H
#define BOMBED_MAZE_H

#include "core/Maze.h"

class BombedMaze : public Maze {
public:
    BombedMaze();
    ~BombedMaze() override;

    void mazeType() const noexcept override;
};

#endif
