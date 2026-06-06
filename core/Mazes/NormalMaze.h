#ifndef PATTERNS_ABSTRACT_FACTORY_MAZEFACTORY_H
#define PATTERNS_ABSTRACT_FACTORY_MAZEFACTORY_H

#include "core/Maze.h"

class Maze {
public:
    Maze();
    virtual ~Maze();

    virtual void mazeType() const noexcept = 0;
};

#endif
