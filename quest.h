#ifndef QUEST_H
#define QUEST_H
#include "item.h"

class Quest
{
public:
    Quest(Item item);
private:
    Item questItem;
};

#endif // QUEST_H
