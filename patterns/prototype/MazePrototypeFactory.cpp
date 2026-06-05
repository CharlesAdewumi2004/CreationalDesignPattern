#include "patterns/prototype/MazePrototypeFactory.h"
#include "core/Maze.h"
#include "core/Wall.h"
#include "core/Room.h"
#include "core/Door.h"

MazePrototypeFactory::MazePrototypeFactory(std::shared_ptr<Maze> m, std::shared_ptr<Wall> w, std::shared_ptr<Room> r, std::shared_ptr<Door> d)
    : _prototypeMaze(m), _prototypeWall(w), _prototypeRoom(r), _prototypeDoor(d) {}

// TODO: implement these once Clone() exists on the core types.
//
//   MakeMaze()                           -> _prototypeMaze->Clone();
//   MakeWall()                           -> _prototypeWall->Clone();
//   MakeRoom(int n)                      -> clone + Initialize(n)
//   MakeDoor(shared_ptr<Room>, ...)      -> clone + Initialize(r1, r2)

std::shared_ptr<Maze> MazePrototypeFactory::MakeMaze() const { return nullptr; }
std::shared_ptr<Wall> MazePrototypeFactory::MakeWall() const { return nullptr; }
std::shared_ptr<Room> MazePrototypeFactory::MakeRoom(int) const { return nullptr; }
std::shared_ptr<Door> MazePrototypeFactory::MakeDoor(std::shared_ptr<Room>, std::shared_ptr<Room>) const { return nullptr; }
