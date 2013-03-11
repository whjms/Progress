/*****************************************************************************
 * quest.h                                                                   *
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
