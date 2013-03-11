#include "quest.h"

Quest::Quest(Item item, int xpReward, int length, std::string action)
    :
      questItem(item),
      reward(xpReward),
      length(length),
      action(action)
{
}

std::string Quest::toString() {
    return action + " " + questItem.toString();
}

int Quest::getReward() {
    return reward;
}

int Quest::getLength() {
    return length;
}

Item Quest::getItem() {
    return this->questItem;
}
