#ifndef SECRETZONE_H
#define SECRETZONE_H

#include "Zone.h"
#include <string>

class SecretZone : public Zone {
public:
    SecretZone();
    std::string interact() override;

private:
    bool discovered;
};

#endif
