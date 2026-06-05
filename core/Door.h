#ifndef CORE_DOOR_H
#define CORE_DOOR_H

#include "core/MapSite.h"

class Room;

class Door : public MapSite {
public:
    Door(Room* = nullptr, Room* = nullptr);

    void Enter() override;
    Room* OtherSideFrom(Room*);

private:
    Room* _room1;
    Room* _room2;
    bool _isOpen;
};

#endif
