#include "patterns/abstract_factory/MazeFactory.h"
#include "core/Maze.h"
#include "core/Wall.h"
#include "core/Room.h"
#include "core/Door.h"

std::shared_ptr<Maze> MazeFactory::MakeMaze() const { return std::make_shared<Maze>(); }
std::shared_ptr<Wall> MazeFactory::MakeWall() const { return std::make_shared<Wall>(); }
std::shared_ptr<Room> MazeFactory::MakeRoom(int n) const { return std::make_shared<Room>(n); }
std::shared_ptr<Door> MazeFactory::MakeDoor(std::shared_ptr<Room> r1, std::shared_ptr<Room> r2) const { return std::make_shared<Door>(r1, r2); }

// TODO: add a CreateMaze(MazeFactory&) builder function (free function or member
//       on MazeGame) that builds the two-room maze using factory.Make*().

