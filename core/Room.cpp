#include "core/Room.h"
#include <iostream>
#include <memory>

Room::Room(int roomNo)  : _sides{nullptr, nullptr, nullptr, nullptr}, _roomNumber(roomNo) {}

std::shared_ptr<MapSite> Room::GetSide(Direction d) const {
    return _sides[static_cast<size_t>(d)];
}

void Room::SetSide(Direction d, std::shared_ptr<MapSite> site) {
    _sides[static_cast<size_t>(d)] = site;
}

void Room::Enter() {
    std::cout << "You entered room " << _roomNumber << ".\n";
}
