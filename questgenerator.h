/*****************************************************************************
 * questgenerator.h                                                          *
 * Author: Qasim Ali                                                         *
 * Created: March 10, 2013                                                   *
 *---------------------------------------------------------------------------*
 * Generates a random Quest with a random Item and a random Location.        *
 * --------------------------------------------------------------------------*
 * Copyright 2013 Qasim Ali. Distributed under GNU GPL v3. For more          *
 * information, consult the LICENSE file located in this program's root      *
 * directory.                                                                *
 ****************************************************************************/
#ifndef QUESTGENERATOR_H
#define QUESTGENERATOR_H
#include "itemgenerator.h"
#include "locationgenerator.h"
#include "quest.h"
#include <vector>
#include <string>

class QuestGenerator
{
public:
    QuestGenerator();

    /* Generate a random quest */
    Quest *getQuest(int reward, int length);

private:
    ItemGenerator itemGen;
    LocationGenerator locationGen;

    std::vector<std::string> actions;

    void initActionVector();
};

#endif // QUESTGENERATOR_H
