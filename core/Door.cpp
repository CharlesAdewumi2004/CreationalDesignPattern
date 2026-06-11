#include "core/Door.h"
#include "core/Room.h"
#include <iostream>
#include <memory>

Door::Door(std::shared_ptr<Room> r1, std::shared_ptr<Room> r2) : _room1(r1), _room2(r2), _isOpen(false) {}

void Door::setOpenned(bool open){
    _isOpen = open;
}

void Door::Enter()
{
    if (_isOpen)
    {
        std::cout << "You walked through the door.\n";
    }
    else
    {
        std::cout << "The door is closed. Ouch!\n";
    }
}

std::shared_ptr<Room> Door::OtherSideFrom(std::shared_ptr<Room> r)
{
    if (r == _room1)
        return _room2;
    if (r == _room2)
        return _room1;
    return nullptr;
}
