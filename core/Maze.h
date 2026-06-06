#ifndef CORE_MAZE_H
#define CORE_MAZE_H

#include "Room.h"

#include <vector>
#include <memory>
#include <iostream>

class Room;

class Maze {
public:
    Maze();
    virtual ~Maze();

    void AddRoom(std::shared_ptr<Room>);
    std::shared_ptr<Room> RoomNo(int) const;
    virtual void mazeType() const noexcept = 0;

private:
    std::vector<std::shared_ptr<Room>> _rooms;
};

#endif
