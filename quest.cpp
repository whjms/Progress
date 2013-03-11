/*****************************************************************************
 * quest.cpp                                                                 *
 * Author: Qasim Ali                                                         *
 * Created: March 10, 2013                                                   *
 *---------------------------------------------------------------------------*
 * Contains the following properties of quests:                              *
 *      - Reward (XP)                                                        *
 *      - Reward (Item)                                                      *
 *      - Quest length (in ticks of MainWindow's timer                       *
 *      - The Location of the quest                                          *
 *      - The action being performed (i.e steal, find, craft)                *
 * --------------------------------------------------------------------------*
 * Copyright 2013 Qasim Ali. Distributed under GNU GPL v3. For more          *
 * information, consult the LICENSE file located in this program's root      *
 * directory.                                                                *
 ****************************************************************************/
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
