#ifndef ZONE_H
#define ZONE_H

class Zone {
public:
    virtual ~Zone() = default;
    virtual std::string interact() = 0;
};

#endif
