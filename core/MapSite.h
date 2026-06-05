#ifndef CORE_MAPSITE_H
#define CORE_MAPSITE_H

class MapSite {
public:
    virtual ~MapSite() = default;
    virtual void Enter() = 0;
};

#endif
