#ifndef CORE_WALL_H
#define CORE_WALL_H

#include "core/MapSite.h"

class Wall : public MapSite {
public:
    Wall();
    void Enter() override;
};

#endif
