#include "core/Room.h"
#include <iostream>

Room::Room(int roomNo)
    : _sides{nullptr, nullptr, nullptr, nullptr}, _roomNumber(roomNo) {}

MapSite* Room::GetSide(Direction d) const {
    return _sides[static_cast<size_t>(d)];
}

void Room::SetSide(Direction d, MapSite* site) {
    _sides[static_cast<size_t>(d)] = site;
}

void Room::Enter() {
    std::cout << "You entered room " << _roomNumber << ".\n";
}
