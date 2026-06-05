#ifndef CORE_ROOM_H
#define CORE_ROOM_H

#include "core/MapSite.h"
#include "core/Direction.h"

#include <array>
#include <memory>

class Room : public MapSite {
public:
    Room(int roomNo);

    std::shared_ptr<MapSite> GetSide(Direction) const;
    void SetSide(Direction, std::shared_ptr<MapSite>);

    void Enter() override;

    int GetRoomNumber() const { return _roomNumber; }

private:
    std::array<std::shared_ptr<MapSite>, 4> _sides;
    int _roomNumber;
};

#endif
