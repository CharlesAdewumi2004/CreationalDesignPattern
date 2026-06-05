#ifndef PATTERNS_ABSTRACT_FACTORY_MAZEFACTORY_H
#define PATTERNS_ABSTRACT_FACTORY_MAZEFACTORY_H

class Maze;
class Wall;
class Room;
class Door;

class MazeFactory {
public:
    MazeFactory() = default;
    virtual ~MazeFactory() = default;

    virtual Maze* MakeMaze() const;
    virtual Wall* MakeWall() const;
    virtual Room* MakeRoom(int n) const;
    virtual Door* MakeDoor(Room* r1, Room* r2) const;
};

// TODO: derive EnchantedMazeFactory and BombedMazeFactory from MazeFactory,
//       overriding the Make* methods to return enchanted / bombed variants.

#endif
