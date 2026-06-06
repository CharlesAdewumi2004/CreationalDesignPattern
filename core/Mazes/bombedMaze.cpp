#include "bombedMaze.h"

BombedMaze::BombedMaze() = default;

BombedMaze::~BombedMaze() = default;

void BombedMaze::mazeType() const noexcept {
    std::cout << "This is a bombed maze" << std::endl;
}
