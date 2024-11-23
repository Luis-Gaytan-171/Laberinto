#ifndef ZONE_H
#define ZONE_H
#include <string>

class Zone { //set the zone
public:
    virtual ~Zone() = default;
    virtual std::string interact() = 0;
};

#endif
