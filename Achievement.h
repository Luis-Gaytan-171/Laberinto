#ifndef ACHIEVEMENT_H
#define ACHIEVEMENT_H

#include <string>

class Achievement {
public:
    Achievement(const std::string& description); //Description of the achievement
    void unlock();
    bool isUnlocked() const;
    std::string getDescription() const;

private:
    std::string description;
    bool unlocked; //check if the achievement is unlocked
};

#endif
