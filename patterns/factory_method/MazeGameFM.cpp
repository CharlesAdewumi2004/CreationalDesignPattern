#include "patterns/factory_method/MazeGameFM.h"
#include "core/Maze.h"
#include "core/Room.h"
#include "core/Wall.h"
#include "core/Door.h"
#include "core/Direction.h"

std::shared_ptr<Maze> MazeGameFM::MakeMaze() const { return std::make_shared<Maze>(); }
std::shared_ptr<Room> MazeGameFM::MakeRoom(int n) const { return std::make_shared<Room>(n); }
std::shared_ptr<Wall> MazeGameFM::MakeWall() const { return std::make_shared<Wall>(); }
std::shared_ptr<Door> MazeGameFM::MakeDoor(std::shared_ptr<Room> r1, std::shared_ptr<Room> r2) const { return std::make_shared<Door>(r1, r2); }

std::shared_ptr<Maze> MazeGameFM::CreateMaze() {
    auto aMaze = MakeMaze();
    auto r1 = MakeRoom(1);
    auto r2 = MakeRoom(2);
    auto theDoor = MakeDoor(r1, r2);

    aMaze->AddRoom(r1);
    aMaze->AddRoom(r2);

    r1->SetSide(Direction::North, MakeWall());
    r1->SetSide(Direction::East, theDoor);
    r1->SetSide(Direction::South, MakeWall());
    r1->SetSide(Direction::West, MakeWall());

    r2->SetSide(Direction::North, MakeWall());
    r2->SetSide(Direction::East, MakeWall());
    r2->SetSide(Direction::South, MakeWall());
    r2->SetSide(Direction::West, theDoor);

    return aMaze;
}
