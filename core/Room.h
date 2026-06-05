#ifndef CORE_ROOM_H
#define CORE_ROOM_H

#include "core/MapSite.h"
#include "core/Direction.h"

#include <array>

class Room : public MapSite {
public:
    Room(int roomNo);

    MapSite* GetSide(Direction) const;
    void SetSide(Direction, MapSite*);

    void Enter() override;

    int GetRoomNumber() const { return _roomNumber; }

private:
    std::array<MapSite *, 4> _sides;
    int _roomNumber;
};

#endif
