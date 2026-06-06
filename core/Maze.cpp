#include "Maze.h"


void Maze::AddRoom(std::shared_ptr<Room> newRoom){
    _rooms.push_back(newRoom);
}

std::shared_ptr<Room> Maze::RoomNo(int roomNum) const{
    for(auto const room : _rooms){
        if(room.get()->GetRoomNumber() == roomNum){
            return room;
        }
    }
    return nullptr;
}