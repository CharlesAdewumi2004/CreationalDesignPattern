#include "core/MazeGame.h"
#include "core/Maze.h"
#include "Mazes/NormalMaze.h"
#include "core/Room.h"
#include "core/Wall.h"
#include "core/Door.h"
#include "core/Direction.h"

std::shared_ptr<Maze> MazeGame::CreateMaze() {
    std::shared_ptr<Maze> aMaze = std::make_shared<NormalMaze>();

    std::shared_ptr<Room> r1 = std::make_shared<Room>(1);
    std::shared_ptr<Room> r2 = std::make_shared<Room>(2);
    std::shared_ptr<Door> theDoor = std::make_shared<Door>(r1, r2);

    aMaze->AddRoom(r1);
    aMaze->AddRoom(r2);

    r1->SetSide(Direction::North, std::make_shared<Wall>());
    r1->SetSide(Direction::East, theDoor);
    r1->SetSide(Direction::South, std::make_shared<Wall>());
    r1->SetSide(Direction::West, std::make_shared<Wall>());

    r2->SetSide(Direction::North, std::make_shared<Wall>());
    r2->SetSide(Direction::East, std::make_shared<Wall>());
    r2->SetSide(Direction::South, std::make_shared<Wall>());
    r2->SetSide(Direction::West, theDoor);

    return aMaze;
}
