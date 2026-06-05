#ifndef PATTERNS_FACTORY_METHOD_MAZEGAMEFM_H
#define PATTERNS_FACTORY_METHOD_MAZEGAMEFM_H

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

    Maze* CreateMaze();

    virtual Maze* MakeMaze() const;
    virtual Room* MakeRoom(int n) const;
    virtual Wall* MakeWall() const;
    virtual Door* MakeDoor(Room* r1, Room* r2) const;
};

// TODO: subclass MazeGameFM as EnchantedMazeGame and BombedMazeGame,
//       overriding the Make* factory methods.

#endif
