#ifndef PATTERNS_FACTORY_METHOD_MAZEGAMEFM_H
#define PATTERNS_FACTORY_METHOD_MAZEGAMEFM_H

#include <memory>

class Maze;
class Room;
class Wall;
class Door;

// MazeGame variant that uses Factory Methods.
// Subclasses override MakeMaze / MakeRoom / MakeWall / MakeDoor
// to produce specialized maze components.
class MazeGameFM {
public:
    virtual ~MazeGameFM() = default;

    std::shared_ptr<Maze> CreateMaze();

    virtual std::shared_ptr<Maze> MakeMaze() const;
    virtual std::shared_ptr<Room> MakeRoom(int n) const;
    virtual std::shared_ptr<Wall> MakeWall() const;
    virtual std::shared_ptr<Door> MakeDoor(std::shared_ptr<Room> r1, std::shared_ptr<Room> r2) const;
};

// TODO: subclass MazeGameFM as EnchantedMazeGame and BombedMazeGame,
//       overriding the Make* factory methods.

#endif
