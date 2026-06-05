#include "patterns/abstract_factory/MazeFactory.h"
#include "core/Maze.h"
#include "core/Wall.h"
#include "core/Room.h"
#include "core/Door.h"

Maze* MazeFactory::MakeMaze() const { return new Maze; }
Wall* MazeFactory::MakeWall() const { return new Wall; }
Room* MazeFactory::MakeRoom(int n) const { return new Room(n); }
Door* MazeFactory::MakeDoor(Room* r1, Room* r2) const { return new Door(r1, r2); }

// TODO: add a CreateMaze(MazeFactory&) builder function (free function or member
//       on MazeGame) that builds the two-room maze using factory.Make*().
