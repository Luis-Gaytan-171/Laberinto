#include "Achievement.h"

Achievement::Achievement(const std::string& description)
    : description(description), unlocked(false) {}

void Achievement::unlock() {
    unlocked = true;
}

bool Achievement::isUnlocked() const {
    return unlocked;
}

std::string Achievement::getDescription() const {
    return description;
}
