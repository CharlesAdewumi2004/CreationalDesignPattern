#include "patterns/prototype/MazePrototypeFactory.h"
#include "core/Maze.h"
#include "core/Wall.h"
#include "core/Room.h"
#include "core/Door.h"

MazePrototypeFactory::MazePrototypeFactory(Maze* m, Wall* w, Room* r, Door* d)
    : _prototypeMaze(m), _prototypeWall(w), _prototypeRoom(r), _prototypeDoor(d) {}

// TODO: implement these once Clone() exists on the core types.
//
//   Maze* MakeMaze()                       -> _prototypeMaze->Clone();
//   Wall* MakeWall()                       -> _prototypeWall->Clone();
//   Room* MakeRoom(int n)                  -> clone + Initialize(n)
//   Door* MakeDoor(Room* r1, Room* r2)     -> clone + Initialize(r1, r2)

Maze* MazePrototypeFactory::MakeMaze() const { return nullptr; }
Wall* MazePrototypeFactory::MakeWall() const { return nullptr; }
Room* MazePrototypeFactory::MakeRoom(int) const { return nullptr; }
Door* MazePrototypeFactory::MakeDoor(Room*, Room*) const { return nullptr; }
