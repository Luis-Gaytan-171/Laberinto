#include "SecretZone.h"

SecretZone::SecretZone() : discovered(false) {}

std::string SecretZone::interact() {
    if (!discovered) {
        discovered = true;
        return "You found the Easter Egg!";
    }
    return "You are in the Secret Zone.";
}
