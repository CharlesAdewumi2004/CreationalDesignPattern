#include "MazeFactory.h"
#include "core/Maze.h"
#include "core/Door.h"

// TODO: add a CreateMaze(MazeFactory&) builder function (free function or member
//       on MazeGame) that builds the two-room maze using factory.Make*().

std::shared_ptr<Maze> createMaze(MazeFactory & mazeFactory){
    auto r1 = mazeFactory.MakeRoom(1);
    auto r2 = mazeFactory.MakeRoom(2);
    auto maze = mazeFactory.MakeMaze();
    auto door = mazeFactory.MakeDoor(r1, r2);
    door->setOpenned(true);
    r1->SetSide(Direction::North, door);
    r2->SetSide(Direction::South, door);
    
    maze->AddRoom(r1);
    maze->AddRoom(r2);

    return maze;
} 