#ifndef PATTERNS_ABSTRACT_FACTORY_MAZEFACTORY_H
#define PATTERNS_ABSTRACT_FACTORY_MAZEFACTORY_H

#include <memory>

class Maze;
class Wall;
class Room;
class Door;

class MazeFactory {
public:
    MazeFactory() = default;
    virtual ~MazeFactory() = default;

    virtual std::shared_ptr<Maze> MakeMaze() const;
    virtual std::shared_ptr<Wall> MakeWall() const;
    virtual std::shared_ptr<Room> MakeRoom(int n) const;
    virtual std::shared_ptr<Door> MakeDoor(std::shared_ptr<Room> r1, std::shared_ptr<Room> r2) const;
};

// TODO: derive EnchantedMazeFactory and BombedMazeFactory from MazeFactory,
//       overriding the Make* methods to return enchanted / bombed variants.

#endif
