#include "patterns/factory_method/MazeGameFM.h"
#include "core/Maze.h"
#include "core/Room.h"
#include "core/Wall.h"
#include "core/Door.h"
#include "core/Direction.h"

Maze* MazeGameFM::MakeMaze() const { return new Maze; }
Room* MazeGameFM::MakeRoom(int n) const { return new Room(n); }
Wall* MazeGameFM::MakeWall() const { return new Wall; }
Door* MazeGameFM::MakeDoor(Room* r1, Room* r2) const { return new Door(r1, r2); }

Maze* MazeGameFM::CreateMaze() {
    Maze* aMaze = MakeMaze();
    Room* r1 = MakeRoom(1);
    Room* r2 = MakeRoom(2);
    Door* theDoor = MakeDoor(r1, r2);

    aMaze->AddRoom(r1);
    aMaze->AddRoom(r2);

    r1->SetSide(North, MakeWall());
    r1->SetSide(East, theDoor);
    r1->SetSide(South, MakeWall());
    r1->SetSide(West, MakeWall());

    r2->SetSide(North, MakeWall());
    r2->SetSide(East, MakeWall());
    r2->SetSide(South, MakeWall());
    r2->SetSide(West, theDoor);

    return aMaze;
}
