#include "core/Maze.h"
#include "core/Room.h"

Maze::Maze() = default;
Maze::~Maze() = default;

void Maze::mazeType()const noexcept{
    std::cout << "This is a normal maze" << std::endl;
}
