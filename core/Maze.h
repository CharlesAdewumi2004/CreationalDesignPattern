#ifndef CORE_MAZE_H
#define CORE_MAZE_H

#include <vector>

class Room;

class Maze {
public:
    Maze();
    ~Maze();

    void AddRoom(Room*);
    Room* RoomNo(int) const;

private:
    std::vector<Room*> _rooms;
};

#endif
