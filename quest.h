/* A class that contains properties such as reward (both XP and items),
 * and length.
 */
#ifndef QUEST_H
#define QUEST_H
#include "item.h"
#include "location.h"

class Quest
{
public:
    Quest(Item item, int xpReward, int length, std::string action, Location* loc);
    std::string toString();
    int getReward();
    int getLength();
    Item getItem();
    Location *getLocation();
private:
    Item questItem;
    int reward;
    int length;
    std::string action;
    Location* location;
};

#endif // QUEST_H
