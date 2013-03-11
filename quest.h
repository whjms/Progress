/* A class that contains properties such as reward (both XP and items),
 * and length.
 */
#ifndef QUEST_H
#define QUEST_H
#include "item.h"

class Quest
{
public:
    Quest(Item item, int xpReward, int length, std::string action);
    std::string toString();
    int getReward();
    int getLength();
    Item getItem();
private:
    Item questItem;
    int reward;
    int length;
    std::string action;
};

#endif // QUEST_H
