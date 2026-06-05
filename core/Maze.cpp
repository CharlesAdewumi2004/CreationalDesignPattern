#include "core/Maze.h"
#include "core/Room.h"

Maze::Maze() = default;

Maze::~Maze() {
    for (std::shared_ptr<Room> r : _rooms) {
        r.reset();
    }
}

void Maze::AddRoom(std::shared_ptr<Room> r) {
    _rooms.push_back(r);
}

std::shared_ptr<Room> Maze::RoomNo(int n) const {
    for (std::shared_ptr<Room> r : _rooms) {
        if (r->GetRoomNumber() == n) return r;
    }
    return nullptr;
}
