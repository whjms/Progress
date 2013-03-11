#include "quest.h"

Quest::Quest(Item item, int xpReward, int length, std::string action, Location *loc)
    :
      questItem(item),
      reward(xpReward),
      length(length),
      action(action),
      location(loc)
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

Location* Quest::getLocation() {
    return this->location;
}
