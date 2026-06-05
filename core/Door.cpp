#include "core/Door.h"
#include "core/Room.h"
#include <iostream>

Door::Door(Room* r1, Room* r2)
    : _room1(r1), _room2(r2), _isOpen(false) {}

void Door::Enter() {
    if (_isOpen) {
        std::cout << "You walked through the door.\n";
    } else {
        std::cout << "The door is closed. Ouch!\n";
    }
}

Room* Door::OtherSideFrom(Room* r) {
    if (r == _room1) return _room2;
    if (r == _room2) return _room1;
    return nullptr;
}
