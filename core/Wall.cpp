#include "core/Wall.h"
#include <iostream>

Wall::Wall() = default;

void Wall::Enter() {
    std::cout << "Ouch! You walked into a wall.\n";
}
