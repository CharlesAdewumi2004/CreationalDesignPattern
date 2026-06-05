#include "core/Maze.h"
#include "core/Room.h"

Maze::Maze() = default;

Maze::~Maze() {
    for (Room* r : _rooms) {
        delete r;
    }
}

void Maze::AddRoom(Room* r) {
    _rooms.push_back(r);
}

Room* Maze::RoomNo(int n) const {
    for (Room* r : _rooms) {
        if (r->GetRoomNumber() == n) return r;
    }
    return nullptr;
}
