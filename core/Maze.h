#ifndef CORE_MAZE_H
#define CORE_MAZE_H

#include <vector>
#include <memory>

class Room;

class Maze {
public:
    Maze();
    ~Maze();

    void AddRoom(std::shared_ptr<Room>);
    std::shared_ptr<Room> RoomNo(int) const;

private:
    std::vector<std::shared_ptr<Room>> _rooms;
};

#endif
