#ifndef PATTERNS_PROTOTYPE_MAZEPROTOTYPEFACTORY_H
#define PATTERNS_PROTOTYPE_MAZEPROTOTYPEFACTORY_H

#include <memory>
#include "patterns/abstract_factory/MazeFactory.h"

class MazePrototypeFactory : public MazeFactory {
public:
    MazePrototypeFactory(std::shared_ptr<Maze> m, std::shared_ptr<Wall> w, std::shared_ptr<Room> r, std::shared_ptr<Door> d);

    std::shared_ptr<Maze> MakeMaze() const override;
    std::shared_ptr<Wall> MakeWall() const override;
    std::shared_ptr<Room> MakeRoom(int n) const override;
    std::shared_ptr<Door> MakeDoor(std::shared_ptr<Room> r1, std::shared_ptr<Room> r2) const override;

private:
    std::shared_ptr<Maze> _prototypeMaze;
    std::shared_ptr<Wall> _prototypeWall;
    std::shared_ptr<Room> _prototypeRoom;
    std::shared_ptr<Door> _prototypeDoor;
};

// NOTE: Prototype requires you to add a virtual Clone() method to
//       Maze, Wall, Room, and Door. The Make* methods then return
//       _prototypeX->Clone(). For Room/Door you'll also need an
//       Initialize() step so the clone gets its room number / room links.

#endif
