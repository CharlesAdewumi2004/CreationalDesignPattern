#ifndef CORE_MAZES_ENCHANTEDMAZE_H
#define CORE_MAZES_ENCHANTEDMAZE_H

#include "core/Maze.h"

class EnchantedMaze : public Maze {
public:
    EnchantedMaze();
    ~EnchantedMaze() override;

    void mazeType() const noexcept override;

};

#endif