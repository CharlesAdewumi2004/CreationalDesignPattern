#include "core/Mazes/NormalMaze.h"

NormalMaze::NormalMaze() = default;
NormalMaze::~NormalMaze() = default;

void NormalMaze::mazeType() const noexcept {
    std::cout << "This is a normal maze" << std::endl;
}
