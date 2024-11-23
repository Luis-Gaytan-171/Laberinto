#ifndef SECRETZONE_H
#define SECRETZONE_H

#include "Zone.h"
#include <string>

class SecretZone : public Zone { //declare the secret zone
public:
    SecretZone();
    std::string interact() override;

private: //check if this zone is discovered
    bool discovered;
};

#endif
