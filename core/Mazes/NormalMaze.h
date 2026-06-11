#ifndef CORE_MAZES_NORMALMAZE_H
#define CORE_MAZES_NORMALMAZE_H

#include "core/Maze.h"

class NormalMaze : public Maze {
public:
    NormalMaze();
    ~NormalMaze() override;

    void mazeType() const noexcept override;
};

#endif
