#ifndef PATTERNS_PROTOTYPE_MAZEPROTOTYPEFACTORY_H
#define PATTERNS_PROTOTYPE_MAZEPROTOTYPEFACTORY_H

#include "patterns/abstract_factory/MazeFactory.h"

class MazePrototypeFactory : public MazeFactory {
public:
    MazePrototypeFactory(Maze* m, Wall* w, Room* r, Door* d);

    Maze* MakeMaze() const override;
    Wall* MakeWall() const override;
    Room* MakeRoom(int n) const override;
    Door* MakeDoor(Room* r1, Room* r2) const override;

private:
    Maze* _prototypeMaze;
    Wall* _prototypeWall;
    Room* _prototypeRoom;
    Door* _prototypeDoor;
};

// NOTE: Prototype requires you to add a virtual Clone() method to
//       Maze, Wall, Room, and Door. The Make* methods then return
//       _prototypeX->Clone(). For Room/Door you'll also need an
//       Initialize() step so the clone gets its room number / room links.

#endif
