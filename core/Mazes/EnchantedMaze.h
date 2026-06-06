#ifndef PATTERNS_ABSTRACT_FACTORY_MAZEFACTORY_H
#define PATTERNS_ABSTRACT_FACTORY_MAZEFACTORY_H

#include "core/Maze.h"

class EnchantedMaze : public Maze{
    EnchantedMaze();
    ~EnchantedMaze() override;

    void mazeType() const noexcept override;

};

#endif