#include "patterns/abstract_factory/MazeFactory.h"
#include "core/Mazes/EnchantedMaze.h"
#include "core/Wall.h"
#include "core/Room.h"
#include "core/Door.h"

class EnchantedMazeFactory : public MazeFactory{
    public:
    std::shared_ptr<Maze> MakeMaze() const { return std::make_shared<EnchantedMaze>(); }
    std::shared_ptr<Wall> MakeWall() const { return std::make_shared<Wall>(); }
    std::shared_ptr<Room> MakeRoom(int n) const { return std::make_shared<Room>(n); }
    std::shared_ptr<Door> MakeDoor(std::shared_ptr<Room> r1, std::shared_ptr<Room> r2) const { return std::make_shared<Door>(r1, r2); }
};
