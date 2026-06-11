#ifndef CORE_DOOR_H
#define CORE_DOOR_H

#include "core/MapSite.h"
#include <memory>
class Room;

class Door : public MapSite {
public:
    Door(std::shared_ptr<Room> = nullptr, std::shared_ptr<Room> = nullptr);

    void setOpenned(bool);
    void Enter() override;
    std::shared_ptr<Room> OtherSideFrom(std::shared_ptr<Room>);

private:
    std::shared_ptr<Room> _room1;
    std::shared_ptr<Room> _room2;
    bool _isOpen;
};

#endif
