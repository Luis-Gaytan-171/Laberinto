#ifndef ACHIEVEMENT_H
#define ACHIEVEMENT_H

#include <string>

class Achievement {
public:
    Achievement(const std::string& description);
    void unlock();
    bool isUnlocked() const;
    std::string getDescription() const;

private:
    std::string description;
    bool unlocked;
};

#endif
